#include <stdio.h>

/**
* main - function that prints the alphabet in lowercase and then in uppercase
*
* Return: always 0(Success)
*/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
