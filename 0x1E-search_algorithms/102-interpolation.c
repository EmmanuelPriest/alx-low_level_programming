#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* interpolation_search - function that searches for a value in a sorted
* array of integers using the Interpolation search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t n, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		n = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (n < size)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}

		if (array[n] == value)
			return (n);
		if (array[n] > value)
			r = n - 1;
		else
			l = n + 1;
	}
	return (-1);
}
