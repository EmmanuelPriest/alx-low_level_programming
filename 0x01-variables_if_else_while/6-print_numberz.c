#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all single digit numbers of base ten starting from zero
 *
 * Return: return 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
