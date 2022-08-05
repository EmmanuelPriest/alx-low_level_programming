#include "main.h"

/**
* print_most_numbers - function that prints numbers from 0 - 9 but not 2 & 4
*
* Return: nothing
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
