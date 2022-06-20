#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: bytes copied from memory area
 * @src: memory area where n bytes are copied from
 * @dest: memory area where n bytes are copied to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
