#include <stdio.h>

/**
* main - program to print size of various data types on the computer
*
* Return: Always 0(Success)
*/
int main(void)
{
	char n;
	int m;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %zu byte(s)\n", sizeof(n));
	printf("Size of an int: %zu byte(s)\n", sizeof(m));
	printf("Size of a long int: %zu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
	printf("Size of a float: %zu byte(s)\n", sizeof(z));

	return (0);
}
