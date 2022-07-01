#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: number of bytes of elements
 *
 * Return: a pointer to the allocated memory if successful
 * NULL if nmemb or size == 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	unsigned int d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(nmemb * size);
	if (n == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < (nmemb * size); d++)
	{
		*((char *)(n) + d) = 0;
	}

	return (n);
}
