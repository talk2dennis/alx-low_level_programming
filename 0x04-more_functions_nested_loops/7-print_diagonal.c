#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * by a new line
 * @n: integer size
 * Return: returns void
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < (n - 1 - i); k++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
			{
				_putchar('\\');
				_putchar('$');
			}
			_putchar('\n');
		}
	}
}
