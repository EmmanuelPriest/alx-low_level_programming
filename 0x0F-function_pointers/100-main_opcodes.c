#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0(success)
*/
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int n, m_bytes;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}

	m_bytes = atoi(argv[1]);

	if (m_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < m_bytes; n++)
	{
		printf("%02x", opc[n] & 0xFF);
		if (n != m_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
