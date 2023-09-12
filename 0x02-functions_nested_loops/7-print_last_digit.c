#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints last digit  of a number
 * @n: is an int argurement
 * Return: Always returns (0)
 */

int print_last_digit(int n)
{	

	if (n == -2147483648)
	{
		_putchar('0' + (unsigned int) n % 10);
		return (unsigned int) n;
	}
	else if (n < 0)
	{
		_putchar('0' + (-(n) % 10));
		return -n;
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n);
	}
}
