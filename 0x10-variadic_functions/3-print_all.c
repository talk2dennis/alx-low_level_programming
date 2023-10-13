#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: format to use
 * Return: nothing
 */


void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(arg, int));
			break;	
			case 'i':
			printf("%i", va_arg(arg, int));
			break;
			case 'f':
			printf("%f", va_arg(arg, double));
			break;
			case 's':
			printf("%s", va_arg(arg, char *));
			break;
			default:
			break;
		}
		if (format[i + 1] == '\0')
			putchar('\n');
		else
			printf(", ");
		i++;
	}
	va_end(arg);
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
