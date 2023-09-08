#include <stdio.h>

/**
 * main - the entry point to my program
 * Return: Always 0 (Success)
 * a is a char
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
