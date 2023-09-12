#include "main.h"

/**
 * print_sign - a function to print the sign of a number
 * @n: is an int argurement
 * Return: returns 1 (if positive) 0 (false)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
