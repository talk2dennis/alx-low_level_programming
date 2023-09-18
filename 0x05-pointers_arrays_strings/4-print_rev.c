#include "main.h"

/**
 * main - A function that prints a string, in reverse, followed by a new line.
 * @s: char s
 * Return: void
 *
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int n;

	n = _strlen(s);
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}

/**
 *  * _strlen - a function that returns the length of a string.
 *   * @s: char pointer
 *    * Return: always return the length of sttring
 *     */

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
