#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @n: first bytes that are filled
 * @s: pointer to the memory area
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		*(s + m) = b;
	}

	return (s);
}
