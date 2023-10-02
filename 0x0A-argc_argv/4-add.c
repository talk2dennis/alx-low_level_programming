#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints out the sum of two argurement
 * @argc: int argc
 * @argv: string argv
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr = argv[i];

		j = 0;
		while (*(endptr + j))
		{
			if (*(endptr + j) < 48 || *(endptr + j) > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(endptr);
	}
	printf("%d\n", sum);
	return (0);
}
