#include <stdio.h>

/**
* main - function that prints alphabets in lowercase except q and e
*
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}
		putchar(n);
	}

	putchar('\n');

	return (0);
}
