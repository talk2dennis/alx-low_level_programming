#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @c: char c
 * Return: a pointer
 */

int isSpace(char *c);

char *cap_string(char *c)
{
	int i, cap = 1;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isSpace(c[i]))
		{
			cap = 1;
		}
		else
		{
			if (cap)
			{
				if (c[i] >= 'a' && c[i] <= 'z')
				{
					c[i] -= 32;
				}
				cap = 0;
			}
			else
			{
				if (c[i] >= 'A' && c[i] <= 'Z')
				{
					c[i] += 32;
				}
			}
		}
	}
	return (c);
}

/**
 * isSpace - a function that checks for space and other define characters
 * @c: char c
 * Return: 1 on match otherwise 0
 */


int isSpace(char *c)
{
	int i;
	char sep[] = {' ', '\t', '\n', '\r', '\f', '\v', '.', '{', '}'};

	for (i = 0; i < 9; i++)
	{
		if (c == sep[i])
			return (i);
	}
	return (0);
}
