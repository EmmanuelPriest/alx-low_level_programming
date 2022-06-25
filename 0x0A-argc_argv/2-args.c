#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argc param
 * @argv: an array
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
