#include "main.h"

int check_palin(char *s, int m, int leng);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that checks if a string is palindrome
 * @s: the string to return
 * Return: 1 if its palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s <= 0)
		return (1);
	return (check_palin(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: length of string calculated
 * Return: sring length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palin - function that checks for palindrome
 * @s: the string being checked
 * @m: number
 * @leng: the string length
 * Return: 1 if its palindrome and 0 if not
 */
int check_palin(char *s, int m, int leng)
{
	if (*(s + m) != *(s + leng - 1))
		return (0);
	if (m >= leng)
		return (1);
	return (check_palin(s, m + 1, leng - 1));
}
