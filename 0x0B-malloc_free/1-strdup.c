#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to coppy
 * Return: Null if str = Null or pointers to the created str
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0;
	char *temp = str;

	while (*temp)
	{
		size++;
		temp++;
	}
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL || str == NULL)
		return (NULL);

	while (*str)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';
	return (ptr - size);
}
