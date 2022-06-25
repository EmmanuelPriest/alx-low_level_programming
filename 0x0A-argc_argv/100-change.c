#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * @argc: argc param
 * @argv: an array
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int digit, m, total = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	digit = atoi(argv[1]);
	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && digit >= 0; m++)
	{
		while (digit >= coins[m])
		{
			digit = digit - coins[m];
			total++;
		}
	}
	printf("%d\n", total);
	return (0);
}
