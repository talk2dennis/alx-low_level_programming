#include "main.h"

/**
 * read_textfile - A function that reads from a file and prints out its content
 * @filename: the name of the file to read from
 * @letters: number of characters to read from
 * Return: returns the number of characters read or -1 on error
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, num_w, fd;
	char *buffer;

	buffer = malloc(sizeof(letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = read(fd, buffer, letters);
	if (num == -1)
	{
		close(fd);
		return (0);
	}
	num_w = write(STDOUT_FILENO, buffer, num);
	close(fd);
	return (num);
}


