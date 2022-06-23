#include "main.h"

int bandersnatch(char *s1, char *s2);
char *move(char *s2);
/**
 * wildcmp - function that compares two strings
 * @s1: first compared string
 * @s2: second compared string
 * Return: 1 if the strings can be considered identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 ==  *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += bandersnatch(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}

/**
 * bandersnatch - function that checks for all the paths when equal char
 * @s1: first string
 * @s2: second string
 * Return: value of wildcmp() or itself
 */
int bandersnatch(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (bandersnatch(s1 + 1, s2));
}

/**
 * *move - function that moves the current chararater pass the *
 * @s2: string to work on
 * Return: the address of character after the *
 */
char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}


























































