#include <stdio.h>

/**
 * main - The entrance to my program
 * Descriptiom: To print finabocci starting
 * from 1, 2 ...
 * Return: Always (0)
 *
 */

int finabocci(int n);

int main(void)
{
	int i, fina;

	for (i = 1; i <= 50; i++)
	{
		fina = finabocci(i);
		printf("%d", fina);
		if (i == 5)
			printf("\n");
		else
			printf(", ");
	}
}


/**
 * finabocci - a function that prints finabocci
 * Description: prints finabocci
 * @n: int agurement
 * Return: Returns int
 *
 */

int finabocci(int n)
{
	if (n == 1)
		return (1);
	else if (n == 2)
		return (2);
	else
		return (n + (n - 1));

}
