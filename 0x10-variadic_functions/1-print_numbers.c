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
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n -1)
			{
				printf("%d\n", va_arg(arg, int));
				break;
			}
			printf("%d%s ", va_arg(arg, int), separator);
		}
		putchar('\n');
	}
}
