#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of byte
 * @s: the string
 * @accept: contains number of bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int m;
	int n;
	char *o;

	m = 0;

	while (s[m] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
			{
				o = &s[m];
				return (o);
			}

			n++;
		}

		m++;
	}

	return (0);
}

