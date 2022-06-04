#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i == 9)
		{
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
