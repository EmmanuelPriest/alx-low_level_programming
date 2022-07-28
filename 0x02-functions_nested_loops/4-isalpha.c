#include "main.h"
#include <ctype.h>

/**
* _isalpha - function that checks for alphabetic character
*
* @c: char to be checked
*
* Return: return 1 if c is a letter lowercase or uppercase
* or 0 if otherwise
*/
int _isalpha(int c)
{
	if (isalpha(c) >= 'A' && isalpha(c) <= 'Z' ||
			isalpha(c) >= 'a' && isalpha(c) <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
