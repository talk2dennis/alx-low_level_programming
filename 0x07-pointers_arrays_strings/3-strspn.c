#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string s
 * @accept: string accept
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
