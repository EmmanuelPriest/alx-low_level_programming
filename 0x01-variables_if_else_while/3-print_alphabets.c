#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: return 0
 */
int main(void)
{
	char c, y;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
return (0);
}
