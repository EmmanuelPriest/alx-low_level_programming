#include <stdio.h>

/**
* main - function that prints lowercase alphabet in reverse
*
* Return: Always 0(Success)
*/
int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
