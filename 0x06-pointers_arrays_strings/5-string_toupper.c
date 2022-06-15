#include "main.h"

/**
 * string_toupper - changing all lowercase letters of a string to uppercase
 * @p: the string to be changed
 * Return: pointer to the resulting string p
 */
char *string_toupper(char *p)
{
	int m;

	m = 0;

	while (*(p + m))
	{
		if (*(p + m) >= "97" && *(p + m) <= "122")
			*(p + m) -= "97" - "65";
		m++;
	}
	return (p);
}
