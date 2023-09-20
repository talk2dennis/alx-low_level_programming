#include "main.h"

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: char dest
 * @src: char src
 * @n: int n to copy char n times
 * Return: a pointer
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
