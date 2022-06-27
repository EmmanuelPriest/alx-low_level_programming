#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array of chars& initialize it with a specific char
 * @size: array to be created
 * @c: used to initialize the array
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int z = 0;

	if (size == 0)
	{
		return (NULL);
	}

	n = (char *) malloc(sizeof(char) * size);

	if (n == NULL)
	{
		return (0);
	}

	while (z < size)
	{
		*(n + z) = c;
		z++;
	}

	*(n + z) = '\0';

	return (n);
}
