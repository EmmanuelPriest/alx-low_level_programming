#include "main.h"

/**
* swap_int - function that swaps the values of two integers
* @a: pointer variable to be swapped
* @b: pointer variable to be swapped
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
