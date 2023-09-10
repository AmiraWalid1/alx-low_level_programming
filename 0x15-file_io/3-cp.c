#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry point
 * Description: copies the content of a file to another file.
 * @argc: num of argument
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int file_to, file_from;
	char buffer[1024];
	ssize_t readed, writed = 1024;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (writed == 1024)
	{
		readed = read(file_from, buffer, 1024);
		if (readed < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		writed = write(file_to, buffer, readed);
		if (writed < 0 || writed != readed)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(file_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
