#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints numbere.
 * @separator: string seperator
 * @n: number of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *arg_str;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		arg_str = va_arg(arg, char *);
		if (arg_str != NULL)
			printf("%s", arg_str);
		else
			 printf("nil");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
		 putchar('\n');
	va_end(arg);
}
