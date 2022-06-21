#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: 2D array
 * @size: the size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int m = 0;
	int sum = 0;
	int sizes;

	sizes = size * size;
	while (m < sizes)
	{
		if (m % (size + 1) == 0)
			sum += a[m];
		m++;
	}

	printf("%d, ", sum);

	sum = 0;
	m = 0;
	while (m < sizes)
	{
		if (m % (size - 1) == 0 && m != (sizes - 1) && m != 0)
			sum += a[m];
		m++;
	}
	printf("%d\n" , sum);
}
