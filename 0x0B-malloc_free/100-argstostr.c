#include "main.h"
#include <stdlib.h>
#include <stdio.h>

 /**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to pointer to an array of strings
 * Rteurn: return a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *n, *retp;
	int x, m, result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0, result = 0; x < ac; x++)
	{
		for (m = 0; *(*(av + x) + m) != '\0'; m++, result++)
			;
		result++;
	}
	result++;

	n = malloc(result * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}

	retp = n;
	for (x = 0; x < ac; x++)

	{
		for (m = 0; av[x][m] != '\0'; m++)
		{
			*n = av[x][m];
				n++;
		}
		*n = '\n';
		n++;
	}

	return (retp);
}
