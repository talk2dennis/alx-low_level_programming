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
		i += 2;
	}
	_putchar('\n');
}
