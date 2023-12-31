#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to print opcodes in hexadecima;
 * @argc: argurement count
 * @argv: argurement value
 * Return: 0 for success and anyother for failure
 */

int main(int argc, char *argv[])
{
	int i,  byte;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (unsigned char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i]);
	}
	return (0);
}
