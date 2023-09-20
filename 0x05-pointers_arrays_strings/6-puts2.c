#include "main.h"

/**
 * puts2 - a function that prints half a string
 * followed by a new line, to stdout.
 * @str: char str
 * Return: void
 */


void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
