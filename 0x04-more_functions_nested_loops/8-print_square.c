#include "main.h"

/**
* print_square - function that prints a square using # = 35(ASCII)
* @size: the size of the square
*
* Return: nothing
*/

void print_square(int size)
{
	int x, y, z = 35;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(z);
			}
			_putchar('\n');
		}
	}
}
