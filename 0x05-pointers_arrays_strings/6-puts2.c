#include "main.h"

/**
 * puts2 - a function that prints half a string
 * followed by a new line, to stdout.
 * @s: char str
 * Return: void
 */

int _strlen(char *s);

void puts2(char *str)
{
	int i, n;

	i = 0;
	n = _stelen(str);
	while (i < n / 2)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


/**
 * _strlen - A function that returns the length of a string
 * @s: char s
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, n;

	i = 0, n = 0;
	while (s[i] != '\0')
	{
		n++;
		i++;
	}
	return (n);
}
