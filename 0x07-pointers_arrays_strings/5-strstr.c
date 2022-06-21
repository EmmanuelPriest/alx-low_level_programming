#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates a substring
 * @needle: the substring
 * @haystack: the string
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int m;
	int n;
	int o;

	m = 0;
	o = 0;
	while (haystack[m] != '\0')
	{
		n = 0;
		while (needle[n + o] != '\0' && haystack[m + o] != '\0' && needle[n + o] == haystack[m + o])
		{
			if (haystack[m + o] != needle[n + o])
				break;
			o++;
		}
		if (needle[n + o] == '\0')
			return (&haystack[m]);
		m++;
		n++;
	}

	return (NULL);
}
