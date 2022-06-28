#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count the nos. of words in a string
 * Description: to count the number of words in a string
 * @s: the string to be evaluated
 * Return: nos. of words
 */
int count_word(char *s)
{
	int count = 0, x, y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - function that splits a string into words
 * @str: the string to be splitted
 * Return:  returns a pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, m = 0, length = 0, words, x = 0, y, z;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= length; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (x)
			{
				z = n;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (y < z)
					*tmp++ = str[y++];
				*tmp = '\0';
				matrix[m] = tmp - x;
				m++;
				x = 0;
			}
		}
		else if (x++ == 0)
			y = n;
	}

	matrix[m] = NULL;

	return (matrix);
}
