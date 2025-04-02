#include "main.h"

/**
 * append_text_to_file - Write some text at the end of an existing file.
 *
 * @filename: the name of the file to read.
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, len = 0, bytesWrite;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWrite = write(file, text_content, len);
		if (bytesWrite == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
