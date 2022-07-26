#include "main.h"
#include <ctype.h>

/**
* _islower - function that checcks for lowercase character
*
* @c: char to be checked
*
* Return: return 1 on success and 0 on fail
*/
int _islower(int c)
{
	int n = 'c';

	if (islower(n))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
