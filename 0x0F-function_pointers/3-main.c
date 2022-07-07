#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always success
*/
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	p = get_op_func(argv[2]);

	if (p != NULL)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		z = (*p)(x, y);
		printf("%d\n", z);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
