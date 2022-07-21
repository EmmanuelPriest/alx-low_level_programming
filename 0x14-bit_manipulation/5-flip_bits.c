#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* flip_bits - function that returns the number of bits
* needed to flip to get from one number to another
* @n: unsigned long int to be flipped
* @m: unsigned long int to be flipped
*
* Return: the number of bits needed to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, bin;

	for (x = 0, bin = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if ((n & 1) != (m & 1))
			bin++;
		n = n >> 1, m = m >> 1;
	}

	return (bin);
}

