#include "main.h"

/**
* file_error - function that checks for opening and closing of file
* @file_from: file to read from
* @file_to: file to write to
* @argv: argument vector
*
* Return: nothing
*/
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0(Success)
*/
int main(int argc, char *argv[])
{
	int n, m, x;
	ssize_t y, z;
	char bit[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	n = open(argv[1], O_RDONLY);
	m = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(n, m, argv);
	y = 1024;
	while (y == 1024)
	{
		y = read(n, bit, 1024);
		if (y == -1)
			file_error(-1, 0, argv);
		z = write(m, bit, y);
		if (z == -1)
			file_error(0, -1, argv);
	}
	x = close(n);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
	x = close(m);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
	return (0);
}
