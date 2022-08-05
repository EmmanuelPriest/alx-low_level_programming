#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
* Return: nothing
*/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
				{
					_putchar(32);
				}
				else if (y < x)
				{
					_putchar(92);
				}
				_putchar('\n');
			}
		}
	}
}
