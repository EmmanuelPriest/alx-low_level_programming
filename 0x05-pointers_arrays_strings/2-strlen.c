#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: pass string pointer to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int leng;

	for (; *s != '\0'; s++)
	{
		leng += 1;
	}
	return (strlen(s));
}
