#include "main.h"

/**
 * reverse_array - a functiin that revers an array
 * @a: int *a
 * @n: int n
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
