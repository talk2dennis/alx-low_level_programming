#include "main.h"

/**
 * print_numbers - A function that prints the numbers,
 * from 0 to 9, followed by a new line.;
 * Return: always return void
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');

}
