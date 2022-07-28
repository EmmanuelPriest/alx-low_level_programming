#include "main.h"

/**
* jack_bauer - function that prints every minute of the day starting
* from 00:00 to 23:59
*
* Return: nothing
*/
void jack_bauer(void)
{
	int n = 0, m = 0;

	while (n < 24)
	{
		while (m < 60)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			m++;
			_putchar('\n');
		}
		n++;
	}
}
