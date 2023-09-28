#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s == '\0')
	{
		return;
	}
	return 1 + _strlen_recursion(s + 1);
}
