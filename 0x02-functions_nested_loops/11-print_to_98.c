#include "main.h"

/**
 * print_to_98 - a function that prints from any number to 98
 * @n: int argurement
 * Return: Always returns void
 */

void print_100(int i);
void print_10(int i);
void print_0(int i);
void print_98(int i);

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				print_98(i);
			}
			else if (i > 9)
				print_10(i);
			else if (i < -99)
			{
				_putchar('-');
				print_100(-i);
			}
			else if (i < -9)
			{
				_putchar('-');
				print_10(-i);
			}
			else if (i < 0)
			{
				_putchar('-');
				print_0(-i);
			}
			else
				print_0(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				print_98(i);
			else if (i < 100)
				print_10(i);
			else
				print_100(i);
		}
	}
}


/**
 * print_100 - a function uses putchar to print
 * digits 100 and above
 * @n: int argurement
 * Return: Always returns void
 */

void print_100(int i)
{
	_putchar('0' + i / 100);
	_putchar('0' + (i % 100) / 10);
	_putchar('0' + (i % 100) % 10);
	_putchar(',');
	_putchar(' ');
}
