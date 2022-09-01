#include "lists.h"
#include <string.h>

/**
* main - function that generates and prints passwords for the crackme5 file
* @argc: argument count to the program
* @argv: argument value to the program
*
* Return: Always 0(Success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *crack;
	int length = strlen(argv[1]), n, temp;

	crack = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (length ^ 59) & 63;
	password[0] = crack[temp];

	temp = 0;
	for (n = 0; n < length; n++)
		temp = temp + argv[1][n];
	password[1] = crack[(temp ^ 79) & 63];

	temp = 1;
	for (n = 0; n < length; n++)
		temp = temp * argv[1][n];
	password[2] = crack[(temp ^ 85) & 63];

	temp = 0;
	for (n = 0; n < length; n++)
	{
		if (argv[1][n] > temp)
			temp = argv[1][n];
	}
	srand(temp ^ 14);
	password[3] = crack[rand() & 63];

	temp = 0;
	for (n = 0; n < length; n++)
		temp = temp + (argv[1][n] * argv[1][n]);
	password[4] = crack[(temp ^ 239) & 63];

	for (n = 0; n < argv[1][0]; n++)
		temp = rand();
	password[5] = crack[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
