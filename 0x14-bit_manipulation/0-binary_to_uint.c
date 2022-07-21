#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: 0 if string contains something other than 1 or 0, or
 * if the string is NULL, return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, m;
	unsigned int conNum;

	n = m = conNum = 0;
	if (b == NULL)
		return (0);
	while (b[m] != '\0')
	{
		if (b[m] == '0' || b[m] == '1')
			m++;
		else
			return (0);
	}
	while (n < m)
	{
		conNum = conNum << 1;
		if (b[n] == '1')
			conNum = conNum + 1;
		n++;
	}
	return (conNum);
}
