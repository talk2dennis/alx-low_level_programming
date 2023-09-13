#include "main.h"

/**
 * times_table - a function that prints times table
 *
 * Return: Always returns void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar('0' + result);
			}

			if (j < 9)
			{
				_putchar(',');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
