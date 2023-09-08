#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * to check if n random variable is positive or not
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* to check if n is positive or not */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	esle
		printf("%d is zero\n", n);

	return (0);
}
