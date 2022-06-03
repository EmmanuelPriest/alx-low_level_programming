#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program for the printing of the last digit number
 *
 * Return: return 0
 */
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum =  n % 10;

	if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	else if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastnum);
		printf("\n");
	}
return (0);
}
