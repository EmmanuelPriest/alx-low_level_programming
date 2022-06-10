#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks a digit
 *
 * @c: return int type
 *
 * Return: return 0 on success and 1 on fail
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
