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
		if (i == 50)
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
	int i, j, fina;
	if (n <= 1)
	{
		i = 1;
		return (1);
	}
	else if (n == 2)
	{
		j = n;
		return (2);
	else
		fina = (j + i);
		i = j;
		j = n;
		return (fina);	
}
