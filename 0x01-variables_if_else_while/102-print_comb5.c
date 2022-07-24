#include <stdio.h>

/**
* main - function that prints all possible combinations of two 2 digit numbers
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if (n < m)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(32);
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (n < 98 || m < 99)
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
