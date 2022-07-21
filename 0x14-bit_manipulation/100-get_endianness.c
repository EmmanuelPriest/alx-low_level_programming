#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_endianness - function that checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int n = 1;
	char *m = (char *)&n;

	if (*m)
		return (1);

	return (0);
}
