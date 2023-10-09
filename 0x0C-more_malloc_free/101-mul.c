#include "main.h"
#include <stdlib.h>

/**
 * print - a function to print strings
 * @c: string to print
 * Return: void
 */

void print(char *c)
{
	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}

/**
 * _is_digit - a function to check if it is a digit
 * @c: char to evaluate
 * Return: void
 */


void _is_digit(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
		{
			print("Error");
			exit(98);
		}
		c++;
	}
}

/**
 * _strlen - a function to return the length of a string
 * @c: string to return the length
 * Return: the length of the string
 */

int _strlen(char *c)
{
	if (!*c)
		return (0);
	return (1 + _strlen(c + 1));
}


/**
 * main - The main entrance to our function
 * @argc: argurement count
 * @argv: argurement value
 * Return: 0 on success or exit code of 98
 */

int main(int argc, char *argv[])
{
	int i, j, len1, len2, tlen, carry = 0, num1, num2, mul;
	char *ans;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
		_is_digit(argv[i]);

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	tlen = len1 + len2;
	for (i = 0; i < tlen; i++)
		ans[i] = '0';
	ans[i] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		num1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2; j >= 0; j--)
		{
			num2 = argv[2][j] - '0';
			mul = (num1 * num2) + (ans[i + j + 1] - '0') + carry;
			carry = mul / 10;
			ans[i + j + 1] = (mul % 10) + '0';
			ans[i] += carry;
		}
	}
	printf("ans: %s\n", ans);
	return (0);
}
