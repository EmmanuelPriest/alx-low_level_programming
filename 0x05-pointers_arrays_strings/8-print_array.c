#include "main.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an array of integers
* @a: int type array pointer
* @n: int type interger
*
* Description: Numbers must be separated by comma, followed by a space
* Numbers should be displayed in the same order they are stored in the array
*/
void print_array(int *a, int n)
{
	int m, x;

	m = 0;
	for (x = 0; x < n; x++)
	{
		m += a[x];
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
