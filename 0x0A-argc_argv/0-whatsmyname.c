#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argc param
 * @argv: an array
 * Return: 0 as success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
