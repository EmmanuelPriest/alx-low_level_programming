#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - funct that returns a pointer 2a newly allocated space in memory
 * @str: the duplicate string
 * Return: NULL if str = NULL,a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *n;
	int m, z;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m] != '\0'; m++)
		;

	n = malloc(m * sizeof(*n) + 1);

	if (n == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < m; z++)
		n[z] = str[z];
	n[z] = '\0';

	return (n);
}
