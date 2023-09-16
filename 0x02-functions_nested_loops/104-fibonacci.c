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
	long a, b, next;

	n = 98;
	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf("%ld", next);

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
