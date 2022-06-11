#include "main.h"

/**
 * print_line - prints straight line
 *
 * @n: returned integer
 */

void print_line(int n)
{
	int k = 0;

	while (k < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		k++;
	}
	_putchar('\n');
}
