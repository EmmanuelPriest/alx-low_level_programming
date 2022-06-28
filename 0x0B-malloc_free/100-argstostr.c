#include "main.h"
#include <stdlib.h>
#include <stdio.h>

 /**
 * *argstostr - concatenates all the arguments of your program
 * Description: function that concatenate all the arguments of my program
 * @ac: argument count
 * @av: pointer to pointer to an array of strings
 * Rteurn: return a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *n;
	int x, y, m, result = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			result++;
	}

	n = malloc(sizeof(char) * result + 1);

	if (n == NULL)
	{
		return (NULL);
	}

	m = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n[m++] = av[x][y];

		n[m++] = '\n';
	}

	n[result] = '\0';

	return (n);
}
