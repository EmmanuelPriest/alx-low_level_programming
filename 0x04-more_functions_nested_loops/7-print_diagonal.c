#include "main.h"
/**
 *print_diagonal - prints a line n chars long.
 *@n: number of \.
 *
 *Return: void.
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (m = 0; m < m; m++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
