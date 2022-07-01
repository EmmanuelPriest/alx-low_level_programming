#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - function for converting a character to integer
 * @x: character to be converted
 *
 * Return: an integer
 */
int _atoi_digit(char x)
{
	unsigned int dev;

	if (x <= '9' && x >= '0')
		dev = x - '0';
	return (dev);
}

/**
 * _isNumber - function to define if a string is a number
 * @argv: the pointer to string
 *
 * Return: Success (0)
 */
int _isNumber(char *argv)
{
	int d;

	for (d = 0; argv[d]; d++)
		if (argv[d] < 48 || argv[d] > 57)
			return (1);
	return (0);
}

/**
 * _calloc - function to allocate array of size *nmemb
 * @nmemb: number of elements
 * @size: number of bytes of elements
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *run;
	unsigned int d;

	run = malloc(size * nmemb);

	if (run == NULL)
		return (NULL);

	for (d = 0; d < (size * nmemb); d++)
		run[d] = '0';

	return (run);
}

/**
 * mul_array - function to multiply two arrays
 * @a1: first array
 * @a2: a character
 * @a3: an array for result
 * @len1: length of array a1
 * @lena: length of array a3
 *
 * Return: pointer to an array
 */
void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, d, n = lena;

	for (d = len1 - 1; d >= 0; d--)
	{
		mul = mul + (a1[d] - '0') * (a2 - '0') + (a3[n] - '0');
		a3[n] = (mul % 10) + '0';
		mul = mul / 10;
		n--;
	}

	while (mul != 0)
	{
		mul = mul + a3[n] - '0';
		a3[n] = (mul % 10) + '0';
		mul = mul / 10;
		n--;
	}
	return (a3);
}

/**
 * print_array - function to print all digits of array
 * @nb: number of elements to print
 * @a: array of elements
 *
 * Return: nothing
 */
void print_array(char *a, int nb)
{
	int d = 0;

	while (a[d] == '0' && (d + 1) < nb)
	{
		d++;
	}
	for (; d < nb; d++)
	{
		_putchar(a[d]);
	}
	_putchar('\n');
}

/**
 * main - function to print the multiplication of two numbers
 * @argc: length arrays
 * @argv: an array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, m, length1, length2, length3;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tab;

	if (argc != 3 || _isNumber(argv[1] == 1 || _isNumber(argv[2] == 1
	{
		for (n = 0; n < 6; n++)
		{
			_putchar(E[n]);
		}
		exit(98);
	}
	for (length1 = 0; argv[1][length1]; length1++)
	;
	for (length2 = 0; argv[2][length2]; length2)
	;
	length3 = length1 + length2;
	tab = _calloc(length3, sizeof(int));
	if (tab == NULL)
	{
		free(tab);
		return (0);
	}
	for (n = length2 - 1, m = 0; n >= 0; n--)
	{
		tab = mul_array(argv[1], length1, argv[2][n], tab, (length3 - 1 - m));
		m++;
	}
	print_array(tab, length3);
	free(tab);
	exit(EXIT_SUCCESS);
	return (0);
}
