#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @src: the appending string to dest
 * @dest: the string being appended by src
 * @n: the largest number of bytes appended to
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
		x++;
	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	if (y < n)
		*(dest + x) = *(src + y);
	return (dest);
}
