#include "main.h"
/**
* times_table - prints the 9 times table, in matrix form, starting with 0
*
* Return: nothing
*/
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar(product + '0');
			}

			else if (product <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(product + '0');
			}
			else if (product > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
