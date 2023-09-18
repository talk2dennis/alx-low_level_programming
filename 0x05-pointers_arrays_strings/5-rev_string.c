#include "main.h"

/**
 * print_rev - A function that reverse a string
 * 
 * @s: char s
 * Return: void
 *
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int n, i;

	n = _strlen(s);
	i = 0;
	
	while (i < n /2)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
		i++;
		i++;
	}
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: char pointer
 * Return: always return the length of sttring
 *
 */

int _strlen(char *s)
{
	int i, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}

	return (n);
}
