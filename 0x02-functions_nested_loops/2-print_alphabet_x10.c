#include "main.h"
/**
 * print_alphabet_x10 - a function to print the lowercase alphabet 10 times
 * Return: returns void
 */

void print_alphabet_x10(void)
{
	char c;
	int n, i;

	n = 10;

	for (i = 0; i < n; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
