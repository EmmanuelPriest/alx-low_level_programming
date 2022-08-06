#include <stdio.h>

/**
* main - function that finds and prints the largest prime number
*
* Return: 0
*/

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largestPrime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largestPrime = divisor;
		}
		divisor = divisor + 1;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
