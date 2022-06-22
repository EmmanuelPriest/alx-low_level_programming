#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: square rooted parameter
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root for recursion
 * @n: num
 * @m: another num
 * Return: num
 */
int _sqrt(int n, int m)
{
	int square = m * m;

	if (square > n)
		return (-1);
	if (square >= n)
		return (m);
	return (_sqrt(n, m + 1));
}
