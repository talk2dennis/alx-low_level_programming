#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbere.
 * @separator: string seperator
 * @n: number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
		 putchar('\n');
	va_end(arg);
}
