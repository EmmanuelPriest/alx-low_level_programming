#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @c: the string to be encoded
 * Return: pointer to the resulting string c
 */
char *rot13(char *c)
{
	int m, n;

	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(c + m); m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (x[n] == *(c + m))
			{
				*(c + m) = y[n];
				break;
			}
		}
	}
	return (c);
}
