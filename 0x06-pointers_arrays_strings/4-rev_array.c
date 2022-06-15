#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the interger array that will be reversed
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int m, k;

	m = 0;
	n = n - 1;

	while (m < n)
	{
		k = *(a + m);
		*(a + m) = *(a + n);
		*(a + n) = k;
		m++;
		n--;
	}
}
