#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: char s
 * @c: char c
 * Return: A pointer to first occurance of c
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}
	return (NULL);
}
