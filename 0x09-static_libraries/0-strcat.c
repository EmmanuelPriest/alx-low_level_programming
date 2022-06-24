#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: char string
 * @dest: the char string being concatenate to
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	for (m = 0; dest[m] != '\0'; m++)
		;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m] = src[n];
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
