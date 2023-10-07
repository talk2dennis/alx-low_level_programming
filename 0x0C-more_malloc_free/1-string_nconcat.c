#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string s1 to copy to
 * @s2: strings to copy from
 * n: integer n
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int n1, n2, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);
	len = (n >= n2) ? n2 : n;
	ptr = malloc(sizeof(char) * (len + n1 + 1));
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	for (i = n1, j = 0; j < len; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
