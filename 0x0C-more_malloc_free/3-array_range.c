#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 * NULL if min > max
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int array = 0, d;
	int *n;

	if (min > max)
	{
		return (NULL);
	}

	array = ((max + 1) - min);

	n = malloc(array * sizeof(int));

	if (n == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < array; d++)
	{
		*(n + 1) = min + 1;
	}

	return (n);
}
