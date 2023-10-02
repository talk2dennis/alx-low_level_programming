#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that calculates the number of change needed
 * @argc: argument count
 * @argv: string
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int cents, num, total_coins = 0, i;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		num = cents / coins[i];
		cents %= coins[i];
		if (num > 0)
			total_coins += num;
	}
	printf("%d\n", total_coins);
	return (0);
}
