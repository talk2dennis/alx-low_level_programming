#include "main.h"

/**
 * print_triangle - a function that prints a triangle, follewed
 * by a new line
 * @size: integer size
 * Return: returns void
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < (size - i - 1); k++)
			{
				_putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
