#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* linear_search - function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	int n;

	if (array == NULL)
		return (-1);

	n = 0;

	while (n < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", n, array[n]);
		if (value == array[n])
		{
			return (n);
		}
		n++;
	}
	return (-1);
}
