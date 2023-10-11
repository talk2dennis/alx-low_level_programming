#include "3-calc.h"

/**
 * main - function that accepts cmd argument
 * @argc: argurment count
 * @argv: argurement variable
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error: invalid argurement\n");
		exit(1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (*(argv[2] + 1) != '\0' || get_op_func(op) == NULL)
	{
		printf("Error: invalid operator\n");
		exit(2);
	}
	if (*op == '/' && b == 0)
	{
		printf("Error: can't divide by zero\n");
		exit(3);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);

	
}
