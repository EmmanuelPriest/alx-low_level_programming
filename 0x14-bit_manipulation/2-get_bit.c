#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_bit - function that returns the value of a bit at a given index
* @n: unsigned long int variable to be gotten
* @index: the index, starting from 0 of the bit to be gotten
*
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 0;

	while (m < index)
	{
		n >>= 1;
		m++;
	}

	if (m > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return (n & 1);
}
