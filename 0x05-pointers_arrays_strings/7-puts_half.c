#include "main.h"

/**
 * puts_half - A function that prints
 * the secod half of a string, in reverse,
 * followed by a new line.
 * @s: char s
 * Return: void
 *
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int n, i, j;

	n = _strlen(str);
	j = (n - 1)  / 2;
	for (i = j + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: char pointer
 * Return: always return the length of sttring
 *
 */

int _strlen(char *s)
{
	int i, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}

	return (n);
}
