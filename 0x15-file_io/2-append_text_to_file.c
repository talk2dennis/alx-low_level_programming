#include "main.h"

/**
 * append_text_to_file - function that appends to the end of a file
 * @filename: the name of the file
 * @text_content: the content to write
 * Return: 1 on success otherwise -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		fw = write(fd, text_content, strlen(text_content));
		if (fw == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
