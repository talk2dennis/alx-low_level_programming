#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: Integer
 * Return: void
 *
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b + 1);
	if (ptr == NULL)
		return (98);
	return (ptr);
}
