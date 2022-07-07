#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*
* Return: If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int m;
	char *sep;

	va_start(param, n);
	for (m = 0; m < n; m++)
	{
		sep = va_arg(param, char*);
		if (sep == NULL)
			printf("(nil)");
		else
		{
			if (m < (n - 1) && separator != 0)
				printf("%s%s", sep, separator);
			else
				printf("%s", sep);
		}
	}
	va_end(param);
	printf("\n");
}
