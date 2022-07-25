#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist
* If filename is NULL return -1
* If text_content is NULL, do not add anything to the file
* 1 if the file exists
* -1 if the file does not exist
* or if you do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int n, readN, writeN;

	writeN = 0;

	if (filename == NULL)
		return (-1);
	n = open(filename, O_WRONLY | O_APPEND);

	if (n < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[writeN])
	{
		writeN++;
	}
	readN = write(n, text_content, writeN);

	if (readN < 0)
		return (-1);
	close(n);

	return (1);
}
