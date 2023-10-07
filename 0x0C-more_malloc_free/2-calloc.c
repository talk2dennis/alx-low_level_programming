#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmeb: unsigned Integer
 * @size: size of memory to allocate
 * Return: void pointer
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(nmemb) * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
