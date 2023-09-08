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
	int k;

	for (i = 0; i < 7; i++)
	{
		for (j = 1 + i; j < 8; j++)
		{
			for (k = 1 + i + j; k < 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if(!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
