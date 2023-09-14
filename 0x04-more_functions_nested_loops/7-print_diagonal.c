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
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');                                                                                                      _putchar('$'); 
			_putchar('\n');
		}
	}
}
