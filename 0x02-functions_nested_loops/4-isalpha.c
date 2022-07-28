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
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
