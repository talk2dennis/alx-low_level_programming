#include "main.h"

/**
 * _strcpy - A function that copies array to buffer
 * @dest: to destination buffer
 * @src: char src
 * Return: pointer
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest)
};
