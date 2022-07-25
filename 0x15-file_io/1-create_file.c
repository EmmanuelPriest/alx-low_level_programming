#include "main.h"

/**
* create_file - function that creates a file
* @filename: name of file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
* The created file must have those permissions: rw-------.
* If the file already exists, do not change the permissions
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int n, readN, writeN;

	writeN = 0;

	if (filename == NULL)
		return (-1);
	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (n < 0)
		return (-1);

	if (text_content && *text_content)
	{
		while (text_content[writeN++])
			;
		readN = write(n, text_content, writeN - 1);

		if (readN < 0)
		{
			close(n);
			return (-1);
		}
	}
	close(n);

	return (1);
}
