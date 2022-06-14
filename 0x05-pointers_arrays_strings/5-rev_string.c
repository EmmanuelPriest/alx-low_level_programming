#include "main.h"

/**
 * rev_string - string reversing
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int m, leng1, leng2;

	leng1 = 0;
	leng2 = 0;

	while (s[leng1] != '\0')
	{
		leng1++;
	}

	leng2 = leng1 - 1;

	for (m = 0; m < leng1 / 2; m++)
	{
		tmp = s[m];
		s[m] = s[leng2];
		s[leng2--] = tmp;
	}
}
