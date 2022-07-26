#include "main.h"

/**
* print_alphabet - function that prints lowercase alphabet
*
* Return: nothing
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
