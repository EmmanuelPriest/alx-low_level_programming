#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int m;
	
	while (n < 10)
	{
		m = 97;

		while (m <= 122)
		{
			_putchar(m);

			m++;
		}
		_putchar('\n');

		n++;
	}
}
