#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 *
 * @filename: the name of the file to read.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWrite, writted = 0;

	if (filename == NULL || letters == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytesRead = read(file, buffer, letters);
	if (bytesRead == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	while (writted < bytesRead)
	{
		bytesWrite = write(STDOUT_FILENO, buffer + writted, bytesRead - writted);
		if (bytesRead == -1)
		{
			close(file);
			free(buffer);
			return (0);
		}
		writted += bytesWrite;
	}
	close(file);
	free(buffer);
	return (bytesWrite);
}
