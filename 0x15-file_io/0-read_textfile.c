#include "main.h"

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output
* @filename: name of the file
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print
* 0 if the file can not be opened or read
* 0 if filename is NULL
* 0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, readN, writeN;
	char *bit;

	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);

	if (n == -1)
		return (0);
	bit = malloc(sizeof(char) * letters);

	if (bit == NULL)
		return (0);
	readN = read(n, bit, letters);

	if (readN == -1)
	{
		free(bit);
		return (0);
	}
	writeN = write(STDOUT_FILENO, bit, (ssize_t)readN);

	if (writeN == -1)
	{
		free(bit);
		return (0);
	}
	close(n);

	return (readN);
}
