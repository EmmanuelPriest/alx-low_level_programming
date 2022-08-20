#include "main.h"
#include <string.h>
/**
* puts_half - function that prints half of a string(second half of the string)
* @str: char string pointer
*
* Return: nothing
*/
void puts_half(char *str)
{
	int length, mid, i;

	/* getting the length of str */
	length = strlen(str);
	/* checking if length of str is odd */
	if (length % 2 == 1)
		/* RHS/ second half of str */
		mid = length / 2 + 1;
	else
		/* LHS/ first half of str */
		mid = length / 2;
	/* printing the RHS(second half) of str */
	for (i = mid; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
