#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: old ptr
 * @old_size: integer old size
 * @new_size: unsigned int new size
 * Return: pointer to the new memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;
	optr = ptr;
	for (i = 0; i < min_size; i++)
		nptr[i] = optr[i];
	free(ptr);
	return (nptr);
}
