#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * to get the last digit of a number n
 * and check if it is greater than 5 or not
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* to get the last digit of the number n */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	}
	else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, last_digit);
	}

	return (0);
}
