#include "main.h"

/**
 * print_to_98 - a function that prints from any number to 98
 * @n: int argurement
 * Return: Always returns void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar('\n');
			}
			else if (i > 9 || i < 9)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar('\n');
			}
			else if (i < 100)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i % 100) / 10);
				_putchar('0' + (i % 100) % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
