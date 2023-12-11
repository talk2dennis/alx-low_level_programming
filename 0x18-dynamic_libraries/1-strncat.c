#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: char dest
 * @src: char src
 * @n: int n to copy char n times
 * Return: a pointer
 */


char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i == n)
			break;
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
