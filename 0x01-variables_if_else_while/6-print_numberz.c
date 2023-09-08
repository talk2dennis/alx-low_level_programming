#include <stdio.h>

/**
 * main - the entry point to my program
 * Return: Always 0 (Success)
 * i is an int
 * this program will print 0 - 9
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
