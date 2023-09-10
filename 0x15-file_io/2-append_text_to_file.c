#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * Do not create the file if it does not exist.
 *
 * If filename is NULL return -1.
 *
 * If text_content is NULL, do not add anything to the file. Return 1
 * if the file exists and -1 if the file does not exist or if you
 * do not have the required permissions to write the file.
 *
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	if (write(file_descriptor, text_content, strlen(text_content)) < 0)
	{
		return (-1);
	}
	close(file_descriptor);
	return (1);

}
