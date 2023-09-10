#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t readed, printed;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	readed = read(file_descriptor, buffer, letters);
	if (readed == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	printed = write(1, buffer, readed);
	if (printed == -1 || printed != readed)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (printed);
}
