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

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
