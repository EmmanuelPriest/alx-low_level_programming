#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _binary_search - function that uses binary search to search
* for a value in a sorted array
* @array: a pointer to the first element of the array to search in
* @left: first index of the sub-array to be searched
* @right: last index of the sub-array to be searched
* @value: value to be searched for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (n = left; n < right; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = left + (right - left) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right = n - 1;
		else
			left = n + 1;
	}
	return (-1);
}

/**
* exponential_search - function that searches for a value in a sorted
* array of integers using the Exponential search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t n = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (n = 1; n < size && array[n] <= value; n = n * 2)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	}
	r = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, r);
	return (_binary_search(array, n / 2, r, value));
}
