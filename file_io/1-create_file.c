#include "main.h"

/**
 * create_file - Create a file.
 *
 * @filename: the name of the file to read.
 * @text_content: the number of letters it should read and print.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, bytesWrite;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWrite = write(file, text_content, sizeof(text_content) - 1);
		if (bytesWrite == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
