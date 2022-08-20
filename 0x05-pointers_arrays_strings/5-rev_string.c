#include "main.h"
#include <string.h>

/**
* rev_string - function that reverses string
* @s: string to be reversed
*
* Return: nothing
*/
void rev_string(char *s)
{
	int n, m;
	char *b_ptr, *e_ptr, temp;

	n = strlen(s);

	b_ptr = s;
	e_ptr = s;

	for (m = 0; m < n - 1; m++)
	{
		e_ptr++;
	}

	for (m = 0; m < n / 2; m++)
	{
		temp = *e_ptr;
		*e_ptr = *b_ptr;
		*b_ptr = temp;
		b_ptr++;
		e_ptr--;
	}
}
