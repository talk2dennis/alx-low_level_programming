#include "main.h"

/**
 * times_table - a function that prints times table
 *
 * Return: Always returns void
 */

void print_to_98(int n)
{
	int i, j, result, next;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar('0' + i % 10);
			}
			else
			{
				putchar('0' + i);
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 100)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
			}
			else
			{
				putchar('0' + i / 100);
				putchar('0' + (i % 100) / 10);
				putchar('0' + (i % 100) % 10);
				putchar(' ');
			}
		}
	}
	return (0);
}
