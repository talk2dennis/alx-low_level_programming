#include "main.h"

/**
 * print_times_table - a function that prints times table
 *@n: int argurement
 *
 * Return: Always returns void
 */

void print_space(int n);

void print_times_table(int n)
{
	int i, j, result, next;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				result = i * j;
				next = i * (j + 1);
				if (result >= 10)
				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else
					_putchar('0' + result);

				if (j < 9)
				{
					_putchar(',');
					if (next < 10)
						print_space(3);
					else
						print_space(2);
				}
				else
					_putchar('\n');
			}
		}
	}
}

/**
 * print_space - a function that prints space n times
 * @n: int argurement n times
 * Return: returns void
 *
 */

void print_space(int n)
{
	int i;
	for (i = 0; i <= n; i++)
		_putchar(' ');
}
