#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: int size of array
 * @c: char c
 * Return: pointer to array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
