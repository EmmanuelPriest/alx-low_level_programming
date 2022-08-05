#include "main.h"

/**
* more_numbers - funcion that prints 10 times the numbers, from 0 to 14
*
* Return: nothing
*/

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
	}

	_putchar('\n');
}
