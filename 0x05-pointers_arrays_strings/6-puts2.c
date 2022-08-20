#include "main.h"
#include <string.h>

/**
* puts2 - function that prints every other character of a string
* (multiples of 2)
* @str: char string pointer
*
* Return: nothing
*/
void puts2(char *str)
{
	int n;

	for (n = 0; n < strlen(str); n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
