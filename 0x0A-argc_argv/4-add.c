#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argc param
 * @argv: an array
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int total = 0, digit, n, m, a;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] > '9' || argv[n][m] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (a = 1; a < argc; a++)
	{
		digit = atoi(argv[a]);
		total = total + digit;
	}
	printf("%d\n", total);
	return (0);
}
