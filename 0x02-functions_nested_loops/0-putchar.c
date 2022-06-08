#include "main.h"
#include <string.h>
/**
 * main - program that prints _putchar
 *
 * Return: Always (0)
 */
int main(void)
{
	char c[] = "_putchar";
	int length, i;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

return (0);
}
