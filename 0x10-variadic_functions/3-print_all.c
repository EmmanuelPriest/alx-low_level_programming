#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_all(const char * const format, ...);
void print_char(va_list cash);
void print_int(va_list cash);
void print_float(va_list cash);
void print_string(va_list cash);


/**
* print_char - function to print char type
* @cash: argument to be printed
*
* Return: nothing
*/
void print_char(va_list cash)
{
	char call;

	call = va_arg(cash, int);
	printf("%c", call);
}

/**
* print_int - function to print int type
* @cash: argument to be printed
*
* Return: nothing
*/
void print_int(va_list cash)
{
	int cab;

	cab = va_arg(cash, int);
	printf("%d", cab);
}

/**
* print_float - function to print float type
* @cash: argument to be printed
*
* Return: nothing
*/
void print_float(va_list cash)
{
	float cab;

	cab = va_arg(cash, double);
	printf("%f", cab);
}

/**
* print_string - function to print string
* @cash: argument to be printed
*
* Return: nothing
*/
void print_string(va_list cash)
{
	char *s;

	s = va_arg(cash, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list cash;
	int n = 0, m = 0;
	char *ptr;

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(cash, format);
	ptr = "";

	while (format && (*(format + n)))
	{
		m = 0;

		while (m < 4 && (*(format + n) != *(funcs[m].sign)))
			m++;

		if (m < 4)
		{
			printf("%s", ptr);
			funcs[m].pt(cash);
			ptr = ", ";
		}

		n++;
	}

	printf("\n");
	va_end(cash);
}
