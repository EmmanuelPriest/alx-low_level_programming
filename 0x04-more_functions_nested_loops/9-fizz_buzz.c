#include <stdio.h>
#include "main.h"

/**
* main - function prints the Fizz-Buzz test
*
* Return: Always return 0
*/
int main(void)
{
	int n, m = 100;

	for (n = 1; n <= m; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != m)
		{
			_putchar(32);
		}
	}
	_putchar('\n');

	return (0);
}
