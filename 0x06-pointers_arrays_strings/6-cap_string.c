#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @c: char c
 * Return: a pointer
 */

int isSpace(char c);

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		if (isSpace(c[i]))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}
	}
	return (c);
}

/**
 * isSpace - a function that checks for space and other define characters
 * @c: char c
 * Return: 1 on match otherwise 0
 */


int isSpace(char c)
{
	int i;
	char sep[15] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '('};

	sep[10] = ')';
	sep[11] = '{';
	sep[12] = '}';

	for (i = 0; i < 13; i++)
	{
		if (c == sep[i])
			return (1);
	}
	return (0);
}
