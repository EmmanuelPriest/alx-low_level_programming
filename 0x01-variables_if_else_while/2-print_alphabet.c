#include <stdio.h>

/**
* main - function that prints the alphabet in lowercase
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
