#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
* jump_search - function that searches for a value in a sorted array of
* integers using the Jump search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t n, idx, m;

	if (array == NULL || size == 0)
		return (-1);

	m = sqrt(size);
	for (n = idx = 0; idx < size && array[idx] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		n = idx;
		idx += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", n, idx);

	idx = idx < size - 1 ? idx : size - 1;
	for (; n < idx && array[n] < value; n++)
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);

	return (array[n] == value ? (int)n : -1);
}
