#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: a string
 * Return: nothing
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
