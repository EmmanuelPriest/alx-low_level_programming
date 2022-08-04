#include "main.h"

/**
* print_numbers - function that prints numbers from 0 - 9
*
* Return: nothing
*/

void print_numbers(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
