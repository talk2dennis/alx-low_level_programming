#include <stdio.h>
#include <math.h>


/**
 * main - The entrance to our function
 * Description: calculates the max factor of number i
 * Return: Always (0)
 */

int main(void)
{
	long int i, j, max;

	max = -1;
	i = 612852475143;

	while (i % 2 == 0)
	{
		max = 2;
		i /= 2;
	}

	for (j = 3; j < sqrt(i); j = j + 2)
	{
		if (i % j == 0)
		{
			max = j;
			i = i / j;
		}
	}

	if (i > 2)
	{
		max = i;
		printf("%ld\n", max);
	}

	return (0);
}
