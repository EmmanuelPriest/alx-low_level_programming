#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @d: the string being encoded
 * Return: pointer to the resulting string d
 */
char *leet(char *d)
{
	int m, n;

	char x[] = "aAeEo0tTlL";
	char y[] =  "4433007711";

	for (m = 0; *(d + m); m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (x[n] == *(d + m))
				*(d + m) = y[n];
		}
	}
	return (d);
}
