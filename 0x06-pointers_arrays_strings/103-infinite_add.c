#include "main.h"

/**
 * rev_string - reversing array
 * @n: interger parameters
 * Return: 0
 */
void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char tmp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		tmp = *(n + y);
		*(n = y) = *(n + x);
		*(n + x) = tmp;
	}
}

/**
 * infinite_add - function that adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: the pointer to the calling function
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
	int overflow = 0, x = 0, y = 0, digits = 0;
	int val = 0, val1 = 0, tmp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
{
	if (x < 0)
		val = 0;
	else
		val = *(n1 + x) - '0';
	if (y < 0)
		val1 = 0;
	else
		val1 = *(n2 + y) - '0';
	tmp_tot = val + val1 + overflow;
	if (tmp_tot >= 10)
		overflow = 1;
	else
		overflow = 0;
	if (digits >= (size_r - 1))
		return (0);
	*(r + digits) = (tmp_tot % 10) + '0';
	digits++;
	y--;
	x--;
}
if (digits == size_r)
	return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
