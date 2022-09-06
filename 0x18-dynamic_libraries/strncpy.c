#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @src: the string to be copied
 * @dest: the string to copy from
 * @n: the largest number of bytes being copied
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && *(src + m))
	{
		*(dest + m) = *(src + m);
		m++;
	}
	while (m < n)
	{
		*(dest + m) = '\0';
		m++;
	}
	return (dest);
}
