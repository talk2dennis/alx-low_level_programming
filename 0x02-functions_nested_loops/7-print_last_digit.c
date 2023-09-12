#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints last digit  of a number
 * @n: is an int argurement
 * Return: Always returns (0)
 */

int print_last_digit(int n)
{
	int i;
	int j;

	printf("%i\n", n);
	j = n;
	if (n < 0)
	{
		j = -(n);
	}
	i = j % 10;
	_putchar('0' + i);
	return (i);
}
