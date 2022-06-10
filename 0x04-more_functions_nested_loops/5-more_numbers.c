#include "main.h"

/**
 * more_numbers - a funcion that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int n = 0, m;

	while (n < 10)
	{
		m = 0;

		while (m <= 14)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');

			m++;
		}
		_putchar('\n');

		n++;
	}
}
