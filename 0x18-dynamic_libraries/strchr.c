#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if the char is not found or point to first occurrence of char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
