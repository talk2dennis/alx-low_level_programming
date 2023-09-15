#include "main.h"

/**
 * print_number - A void print_number(int n);
 * @n: interger to print
 * Return: always return void
 */

void print1000(int n);
void print100(int n);
void print10(int n);


void print_number(int n)
{
	if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n > 999)
    {
        print1000(n);
    }
    else if (n > 99)
        print100(n);
    else if (n > 9)
        print10(n);
    else
        _putchar('0' + n);
}

/**
 * print1000 - A function to print 1000 and above
 * @n: integer to print
 * Return: void
 */

void print1000(int n)
{
	_putchar('0' + n / 1000);
	_putchar('0' + (n % 1000) / 100);
	_putchar('0' + (n % 100) / 10);
	_putchar('0' + (n % 10));
}

/**
 * print100 - A function to print 100+ digits
 * @n: integer to print
 * Return: void
 */

void print100(int n)
{
	_putchar('0' + (n / 100));
	_putchar('0' + ((n % 100) / 10));
	_putchar('0' + (n % 10));
}

/**
 * print10 - A function to print 10+
 * @n: integer to print
 * Return: void
 */

void print10(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}


