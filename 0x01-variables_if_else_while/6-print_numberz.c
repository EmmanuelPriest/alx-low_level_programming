#include <stdio.h>

/**
* main - function to print all single numbers of base 10 from 0
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
