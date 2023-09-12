#include "main.h"

/**
 * print_alphabet - is a function that prints all lowercase alphabets
 * Return: return void
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
