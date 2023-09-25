#include "main.h"

/**
 * _memcpy - a function that copies memory area from src to dest
 * @dest: char dest
 * @src: char src
 * @n: int n
 * Return: Return a dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
