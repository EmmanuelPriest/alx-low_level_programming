#include "main.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);

/*
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int n, m;
	unsigned int bin = 0;

	if (b == NULL)
		return (0);

	for (n = 0; b[n + 1]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}

	m = 1;
	while (n >= 0)
	{
		bin = bin + ((b[n] - '0') * (m));
		(n--, (m = m * 2));
		return (bin);
	}
}
