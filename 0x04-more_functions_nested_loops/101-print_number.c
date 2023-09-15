#include "main.h"

/**
 * print_number - A void print_number(int n);
 * @n: interger to print
 * Return: always return void
 */


void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
		_putchar('0' + (i % 10));
	}
}

