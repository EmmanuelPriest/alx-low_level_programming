#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_search - function that searches for a value in a sorted array
* of integers using the Binary search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t n, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (n = l; n < r; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = l + (r - l) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			r = n - 1;
		else
			l = n + 1;
	}
	return (-1);
}
