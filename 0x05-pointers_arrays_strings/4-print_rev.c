#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int m, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (m = j - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}

