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
	int n1, n2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		n1 = strlen(s1);
	if (s2 != NULL)
		n2= strlen(s2);
	ptr = malloc(sizeof(char) * (n1 + n2 + 1));
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
	ptr = ptr - n1 - n2;
	return (ptr);
}
