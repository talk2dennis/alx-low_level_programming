#include <stdio.h>

/**
 * main - The entrance to my program
 * Descriptiom: To print finabocci starting
 * from 1, 2 of the first 98 numbers
 * Return: Always (0)
 *
 */

int main(void)
{
	int n, i;
	unsigned long int a, b, next;

	n = 98;
	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf("%lu", next);

		if (i != n)
		{
			printf(", ");
		}

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
