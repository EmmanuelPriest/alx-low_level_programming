#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
* advanced_binary_recursive - function that uses binary search to recursively
* search for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* @left: first index of the array to search
* @right: last index of the array to search
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t n;

	if (right < left)
	{
		return (-1);
	}

	printf("Searching in array: ");
	n = left;

	while (n < right)
	{
		printf("%d, ", array[n]);
		n++;
	}
	printf("%d\n", array[n]);

	n = left + (right - left) / 2;
	if (array[n] == value && (n == left || array[n - 1] != value))
	{
		return (n);
	}
	if (array[n] >= value)
	{
		return (advanced_binary_recursive(array, left, n, value));
	}
	return (advanced_binary_recursive(array, n + 1, right, value));
}

/**
* advanced_binary - function that searches for a value in a sorted
* array of integers
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
