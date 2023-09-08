#include <stdio.h>

/**
 * main - the entry point to my program
 * Return: Always 0 (Success)
 * a is a char
 *
 * This program will print a - z in reverse order
 */

int main(void)
{
	char a;

	for (a = 'z'; a <= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
