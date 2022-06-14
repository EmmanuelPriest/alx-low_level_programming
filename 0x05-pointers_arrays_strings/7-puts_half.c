#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: string parameter
 */
void puts_half(char *str)
{
	int m, n, i;

	m = strlen(str);
	if (m % 2 == 1)
		n = m / 2 + 1;
	else
		n = m / 2;
	for (i = n; i < m; i++)
		_putchar(str[i]);
	_putchar('\n');
}
