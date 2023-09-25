#include "main.h"

/**
 * print_diagsums - function that prints
 * the sum of the two diagonals of a square matrix of integers.
 * @a: int a
 * @size: int size of array
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int i, j = 0, sum = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum += a[i - j];
		}
		if ((i + 1) % size == 0)
		{
			sum2 += a[i - j];
			j++;
		}
	}
	printf("%d %d\n", sum, sum2);
	putchar('\n');
}
