#include "main.h"

/**
 * rev_string - string reversing
 * @s: parameter s
 */
void rev_string(char *s)
{
	char tmp;
	int m, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
	for (m = 0; m <= length1 / 2; m++)
	{
		tmp = s[m];
		s[m] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
