#include "main.h"

/**
 * check_error - function that checks whether a file was opened without error
 * @err: error code
 * @fd: file descriptor
 * @name: file name
 * @code: the mode of the file
 * Return: void
 */

void check_error(int err, int fd, char *name, char code)
{
	if (err == -1 && code == 'r')
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", name);
		exit(99);
	}
	else if (err == -1 && code == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}
	else if (err == -1 && code == 'c')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}





/**
 * main - a Function that copies content of one file to another
 * @argc: argurement count
 * @argv: argurement values
 * Return: int
 */

int main(int argc, char *argv[])
{
	int dest, src, buffer[1024], fw, fr = 1024, fc;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_error(src, src, argv[1], 'r');
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(dest, dest, argv[2], 'w');
	while (fr == 1024)
	{
		fr = read(src, buffer, sizeof(buffer));
		check_error(fr, src, argv[1], 'r');
		fw = write(dest, buffer, fr);
		check_error(fw, dest, argv[2], 'w');
	}
	fc = close(src);
	check_error(fc, src, argv[1], 'c');
	fc = close(dest);
	check_error(fc, dest, argv[2], 'c');
	return (0);
}
