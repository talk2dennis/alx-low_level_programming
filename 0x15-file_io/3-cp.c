#include "main.h"

/**
 * check_error - function that checks whether a file was opened without error
 * @src: src file descriptor
 * @dest: destination file descriptor
 * @argv: pointer to the argurement array
 * Return: void
 */

void check_error(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(src, dest, argv);
	while (fr == 1024)
	{
		fr = read(src, buffer, sizeof(buffer));
		check_error(fr, 0, argv);
		fw = write(dest, buffer, fr);
		check_error(0, fw, argv);
	}
	fc = close(src);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	fc = close(dest);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
