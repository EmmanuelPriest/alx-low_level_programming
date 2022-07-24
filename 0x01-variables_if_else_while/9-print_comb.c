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
	while (n <= 57)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar('\n');

	return (0);
}
/*
* The ascii values of 0, 9, comma and space are 48, 57, 44 and 32
* respectively
*/
