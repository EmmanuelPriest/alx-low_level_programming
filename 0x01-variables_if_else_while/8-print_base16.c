#include <stdio.h>

/**
* main - function that prints all numbers of base 16 from 0
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
