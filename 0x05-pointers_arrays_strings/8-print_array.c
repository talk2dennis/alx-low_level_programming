#include "main.h"

/**
 * print_array - A function that prints all arrays ellement
 * followed by a new line.
 * @a: int a
 * @n: int n
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 < n)
			printf(", ");
	}
	_putchar('\n');
}
