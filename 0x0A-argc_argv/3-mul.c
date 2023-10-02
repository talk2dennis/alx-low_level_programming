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
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
