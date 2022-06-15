#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: the outputs of the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (*(s1 + m) && *(s2 + m) && (*(s1 + m) == *(s2 + m)))
		m++;

	return (*(s1 + m) - *(s2 + m));
}
