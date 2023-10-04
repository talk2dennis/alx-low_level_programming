#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str-concat - function that concatenates two strings.
 * @s1: string s1
 * @s2: string s2
 * Return: returns a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	n = strlen(s1);
	n += strlen(s2);
	ptr = malloc(sizeof(char) * n);
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
