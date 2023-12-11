#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: char dest
 * @src: char src
 * Return: a pointer
 */


char *_strcat(char *dest, char *src)
{
	int n = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		n++;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';
	return (dest);
}
