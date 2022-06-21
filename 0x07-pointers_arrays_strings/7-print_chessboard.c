#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
g* @a: 2D character arrays
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int n;

	m = 0;
	while (m < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		m++;
	}
}
