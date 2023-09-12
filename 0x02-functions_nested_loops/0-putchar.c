#include <string.h>
#include "main.h"

/**
 * main - the entrance point to our program that prints a string
 * Return: Always 0 on success
 */

int main(void)
{
	int i, n;
	char str[] = "_putchar";

	n = strlen(str);

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
