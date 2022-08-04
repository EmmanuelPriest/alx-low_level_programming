#include "main.h"

/**
* print_numbers - function that prints numbers from 0 - 9
*
* Return: nothing
*/

void print_numbers(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		n++;
		_putchar(n);
	}
	_putchar('\n');
}
