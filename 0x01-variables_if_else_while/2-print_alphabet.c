#include <stdio.h>

/**
 * main - the entry point to my program
 * return: always return 0 (success)
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
