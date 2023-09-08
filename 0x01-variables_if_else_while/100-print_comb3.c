#include <stdio.h>

/**
 * main - the entry point to my program
 * Return: Always 0 (Success)
 * i is an int
 *
 * this program will print 01 - 89 using putchar
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
