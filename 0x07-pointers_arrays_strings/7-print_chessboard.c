#include "main.h"

/**
 * print_chessboard - A function that print the chessboard
 * @a: an 8*8 matrix array
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
