#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all the numbers of base sixteen in lowercase
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
return (0);
}
