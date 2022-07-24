#include <stdio.h>

/**
* main - function that prints all possible different combinations of 3 digits
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n, m, x;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (x = 50; x <= 57; x++)
				if (x > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (n < 55 || m < 56 || x < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
		}
	}
	putchar('\n');

	return (0);
}
