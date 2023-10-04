#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_helper - helper function
 * @str: string to copy
 * @n: integer n
 * Return: Pointer
 */


char *str_helper(char *str, int n)
{
	char *ptr;

	ptr = malloc(sizeof(char) * (n + 1));
	while (*str)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';
	return (ptr - n);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: string s1
 * @s2: string s2
 * Return: returns a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int n = 0;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = str_helper("", 0);
		return (ptr);
	}
	if (s1 == NULL && s2 != NULL)
	{
		n = strlen(s2);
		ptr = str_helper(s2, n);
		return (ptr);
	}
	if (s1 != NULL && s2 == NULL)
	{
		n = strlen(s1);
		ptr = str_helper(s1, n);
		return (ptr);
	}
	n = strlen(s1);
	n += strlen(s2);
	ptr = malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	ptr = ptr - n;
	return (ptr);
}
