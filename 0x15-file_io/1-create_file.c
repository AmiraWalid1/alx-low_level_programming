#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it.
 * if filename is NULL return -1.
 * if text_content is NULL create an empty file.
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t printed;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	printed = write(file_descriptor, text_content, strlen(text_content));
	if (printed < 0)
	{
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
