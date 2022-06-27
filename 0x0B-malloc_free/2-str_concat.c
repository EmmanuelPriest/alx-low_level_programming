#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  function that concatenates two strings
 * @s1: string 1 in memory
 * @s2: string 2 in memory
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int m, x, y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (m = 0; s1[m] != '\0'; m++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	n = malloc((m * sizeof(*s1)) + (x * sizeof(*s2)) + 1);

	if (n == NULL)
	{
		return (NULL);
	}

	for (y = 0, z = 0; y < (m + x + 1); y++)
	{
		if (y < m)
			n[y] = s1[y];
		else
			n[y] = s2[z++];
	}

	return (n);
}
