#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase, exclude q and e
 *
 * Return: return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
