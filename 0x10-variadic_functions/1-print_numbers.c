#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: If separator is NULL, don’t print it
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int m;
	int sep;

	sep = 0;


	va_start(param, n);
	for (m = 0; m < n; m++)
	{
		sep = va_arg(param, int);
		if (m < (n - 1) && separator != 0)
			printf("%d%s", sep, separator);
		else
			printf("%d", sep);
	}
	va_end(param);
	printf("\n");
}
