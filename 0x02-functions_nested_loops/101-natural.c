#include <stdio.h>

/**
 * main - the main entrance to the program
 * Return: Always return (0)
 *
 * Description: prints the sum of the multiples
 * of 3 and 5 in number 1024
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
