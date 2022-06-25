#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argc param
 * @argv: an array
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int result, num, num1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	result = num * num1;

	printf("%d\n", result);
	return (0);
g
