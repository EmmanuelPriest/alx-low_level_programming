#include <stdio.h>

/**
* main - function that prints all possible different combination of two digits
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; n <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n < 56 || m < 57)
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
