#include "main.h"

/**
 * print_most_numbers - A void print_most_numbers(void);
 * Return: always return void
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			break;
		_putchar('0' + i);
	}
	_putchar('\n');

}
