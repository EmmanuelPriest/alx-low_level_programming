#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generates random valid passwords for program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	int myrand;
	int total;

	srand(time('\0'));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
