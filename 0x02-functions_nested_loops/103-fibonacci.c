#include <stdio.h>

/**
 * main - The entrance to my program
 * Descriptiom: A program that finds and prints the sum of th
 * even-valued terms, followed by a new line.
 * from 1, 2 ...
 * Return: Always (0)
 *
 */

int main(void)
{
	int n, i;
	long a, b, next, sum = 0;

	n = 50;
	a = 1;
	b = 2;


	for (i = 3; i <= n; i++)
	{
		if ((b < 4000000) && (b % 2 == 0))
		{
			sum += next;
		}
		next = a + b;

		a = b;
		b = next;
	}
	printf("%ld\n", sum);

	return (0);
}
