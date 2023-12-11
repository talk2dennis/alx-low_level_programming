#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: char s
 * @accept: char accept
 * Return: A pointer to first occurance of c
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
