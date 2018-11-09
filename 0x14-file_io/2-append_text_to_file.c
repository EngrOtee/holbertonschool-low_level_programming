#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a
 * file.
 * @filename: Pointer to name of the file.
 * @text_content: Pointer to string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, i;

	if (filename == NULL)
		return (-1);
	fileopen = open(filename, O_WRONLY | O_APPEND);
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
