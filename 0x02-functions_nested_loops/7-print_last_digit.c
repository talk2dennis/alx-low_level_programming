#include "main.h"

/**
 * print_last_digit - a function that prints last digit  of a number
 * @n: is an int argurement
 * Return: Always returns (0)
 */

int print_last_digit(int n)
{
	int i;
	i = n % 10;
	_putchar(i);
	return (i);
}
