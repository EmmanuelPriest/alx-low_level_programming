#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function for calculating and returning a string length
 * @string: a string
 *
 * Return: a string length
 */
int _strlen(char *string)
{
	int d;

	for (d = 0; string[d] != '\0'; d++)
		;
	return (d);
}

/**
 * *string_nconcat - function that concatenates two strings s1 and s2
 * @s1: the string 1
 * @s2: the string 2
 * @n: bytes to concatenate from the second string s2
 *
 * Return: a pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int number = n, length, d, m;

	if (s1 == NULL) /* testing for null string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (number < 0) /* testing for negative n bytes */
		return (NULL);
	if (number >= _strlen(s2)) /* testing if n is too big */
		number = _strlen(s2);

	length = _strlen(s1) + number + 1; /* +1 accounting for null pointer */

	p = malloc(sizeof(*p) * length); /* storing with malloc and error checking */
	if (p == NULL)
		return (NULL);
	for (d = 0; s1[d] != '\0'; d++) /* concatinating */
		p[d] = s1[d];
	for (m = 0; m < number; m++)
		p[d + m] = s2[m];
	p[d + m] = '\0';

		return (p);
}
