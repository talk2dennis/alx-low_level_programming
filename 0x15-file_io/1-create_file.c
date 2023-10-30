#include "main.h"

/**
 * create_file - A function that creates file
 * @filename: the name of the file to create
 * @text_content: the content to write to the new file
 * Return: 1 on success and -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd, fw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}
	if (text_content != NULL)
	{
		fw = write(fd, text_content, strlen(text_content));
		if (fw == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
