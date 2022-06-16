#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @c: the string being capitalised
 * Return: pointer to the resulting string c
 */
char *cap_string(char *c)
{
	int m, n;

	char y[] = " \t\n,;.!?\"(){}";

	m = 0;

	while (*(c + m))
	{
		if (*(c + m) >= 'a' && *(c + m) <= 'z')
		{
			if (m == 0)
				*(c + m) -= 'a' - 'A';
			else
			{
				for (n = 0; n <= 12; n++)
				{
					if (y[n] == *(c + m - 1))
						*(c + m) -= 'a' - 'A';
				}
			}
		}
		m++;
	}
	return (c);
}
