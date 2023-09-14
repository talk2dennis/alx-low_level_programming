#include "main.h"

/**
 * print_square - a function that prints a square using #, follewed
 * by a new line
 * @size: integer size
 * Return: returns void
 *
 */

void print_square(int size)
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
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
