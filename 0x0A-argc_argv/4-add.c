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
	int num, sum, i;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;

		num = strtol(argv[i], endptr, 10);
		if (endptr != '\0' && num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
