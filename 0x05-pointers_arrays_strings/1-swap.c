#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: void
 *
 */
 
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
