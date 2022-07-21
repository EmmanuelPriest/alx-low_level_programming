#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* clear_bit - function that sets the value of a bit to 1 at a given index
* @n: pointer to the unsigned long int to be set
* @index: the index, starting from 0 of the bit to be set
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
	{
		return (-1);
	}
	clear = 1 << index;
	*n = (*n & ~clear);
	{
		return (1);
	}
}
