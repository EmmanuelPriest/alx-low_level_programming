#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: return 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
