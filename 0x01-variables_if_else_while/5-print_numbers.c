#include <stdio.h>

/**
* main - function to print all single digit of base 10 starting from 0
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}

