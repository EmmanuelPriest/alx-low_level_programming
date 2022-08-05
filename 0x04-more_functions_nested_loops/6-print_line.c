#include "main.h"

/**
* print_line - function that draws a straight line in the terminal
* @n: number of times the character _ should be printed
*
* Return: nothing
*/

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
