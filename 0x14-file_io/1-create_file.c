#include "holberton.h"
/**
 * create_file - Function that creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, i;

	if (filename == NULL)
		return (-1);
	fileopen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fileopen == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fileopen);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	filewrite = write(fileopen, text_content, i);
	if (filewrite == -1)
		return (-1);
	close(fileopen);
	return (1);
}
