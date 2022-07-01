#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - function to move a string one place to the left and print it
 * @str: the string to be moved
 * @l: the size of string
 *
 * Return: nothing
 */
void _print(char *str, int l)
{
	int n, m;

	n = m = 0;
	while (n < l)
	{
		if (str[n] != '0')
			m = 1;
		if (m || n == l - 1)
			_putchar(str[n]);
		n++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and place the answer into dest
 * @n: char to be multiplied
 * @num: string to be multiplied
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: the highest index to start addition
 *
 * Return: NULL on failure or a pointer to dest
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int x, y, mul, mulrem, plus, addrem;

	mulrem = addrem = 0;
	for (x = num_index, y = dest_index; x >= 0; x--, y--)
	{
		mul = (n - '0') * (num[x] - '0') + mulrem;
		mulrem = mul / 10;
		plus = (dest[y] - '0') + (mul % 10) + addrem;
		addrem = plus / 10;
		dest[y] = plus % 10 + '0';
	}
	for (addrem = addrem + mulrem; y >= 0 && addrem; y--)
	{
		plus = (dest[y] - '0') + addrem;
		addrem = plus / 10;
		dest[y] = plus % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: the pointer to arguments
 *
 * Return: 0 if digits successful, 1 if not
 */
int check_for_digits(char **av)
{
	int n, m;

	for (n = 1; n < 3; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			if (av[n][m] < '0' || av[n][m] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - function that initializes a string
 * @str: the string to be initialized
 * @l: the length of string
 *
 * Return: nothing
 */
void init(char *str, int l)
{
	int n;

	for (n = 0; n < l; n++)
		str[n] = '0';
	str[n] = '\0';
}

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 or exit status of 98 on failure
 */
int main(int argc, char *argv[])
{
	int n, m, x, y, z;
	char *b;
	char *c;
	char d[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (y = 0; d[y]; y++)
			_putchar(d[y]);
		exit(98);
	}
	for (n = 0; argv[1][n]; n++)
		;
	for (m = 0; argv[2][m]; m++)
		;
	x = n + m + 1;
	b = malloc(x * sizeof(char));
	if (b == NULL)
	{
		for (y = 0; d[y]; y++)
			_putchar(d[y]);
		exit(98);
	}
	init(b, x - 1);
	for (y = m - 1, z = 0; y >= 0; y--, z++)
	{
		c = mul(argv[2][y], argv[1], n - 1, b, (x - 2) - z);
		if (c == NULL)
		{
			for (y = 0; d[y]; y++)
				_putchar(d[y]);
			free(b);
			exit(98);
		}
	}
	_print(b, x - 1);
	return (0);
}
