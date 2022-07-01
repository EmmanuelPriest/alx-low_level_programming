#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size,in bytes,of the allocated space for ptr
 * @new_size: the new size,in bytes of the new memory block
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int d;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (d = 0; d < new_size; d++)
			p[d] = old_p[d];
	}

	if (new_size > old_size)
	{
		for (d = 0; d < old_size; d++)
				p[d] = old_p[d];
	}

	free(ptr);
	return (p);
}
