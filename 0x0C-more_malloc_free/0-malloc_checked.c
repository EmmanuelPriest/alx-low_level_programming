#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: memory size to be allocated.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}

	return (n);
}
