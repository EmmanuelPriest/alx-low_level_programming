#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: contains number of bytes
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;
	unsigned int o;

	m = 0;
	o = 0;

	while (accept[n] != '\0')
	{
		m = 0;

		while (s[m] != '\0')
		{
			if (accept[m] == s[n])
			{
				o++;
			}

			n++;
		}

		m++;
	}

	return (o);
}
