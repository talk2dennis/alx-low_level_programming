#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: char pointer
 * Return: always return the length of sttring
 */

int _strlen(char *s)
{
	int i, n;

	for (i = 0; *s[i] != '\0'; i++)
		n++;

	return (n);
}
