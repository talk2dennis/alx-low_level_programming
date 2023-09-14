#include "main.h"

/**
 * print_line - a function that draws a line on the terminal.
 * end by a new line
 * @n: integer size
 * Return: returns void
 *
 */


void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

