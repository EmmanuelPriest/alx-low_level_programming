#include <stdio.h>

/**
* main - function that prints all possible combinations of single-digit number
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	n = 48;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
/*
* The ascii values of 0, 9, comma and space are 48, 57, 44 and 32
* respectively
*/
