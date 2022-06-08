#include "main.h"
#include <ctype.h">

/**
 * _islower - function that checks for lowercase character
 *
 * Return: return 0 on success and 1 on fail
 */

int _islower(int c)
{
        int r = islower(c);

        if (r > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

