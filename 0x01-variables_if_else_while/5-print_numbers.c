#include <stdio.h>

/**
 * main - the entry point to my program
 * Return: Always 0 (Success)
 * i is an int
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar("%i", i);
	putchar('\n');
	return (0);
}
