#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: pointer to the buffer where the string is copied
 * @src: string to be copied
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int leng, m;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (m = 0; m < leng; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
