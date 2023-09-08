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

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));

			putchar(' ');

			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
