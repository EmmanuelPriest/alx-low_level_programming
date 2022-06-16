#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the buffer
 * @size: the size bytes
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int l = 0, m, n;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		m = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + l + n));
			else
				printf(" ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int d = *(b + l + n);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%d", d);
		}
		printf("\n");
		l += 10;
	}
}
