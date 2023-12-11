#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: char s1
 * @s2: char s2
 * Return: return 0 if equal
 */


int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		n = s1[i] - s2[i];
		if (n != 0)
			break;
	}
	return (n);
}
