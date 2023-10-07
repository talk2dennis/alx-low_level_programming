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
	char *ptr2 = NULL;
	unsigned int nsize = 0, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nsize = nmemb * size;
	ptr = malloc(nsize);
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	for (i = 0; i < size; i++)
		ptr2[i] = 0;
	return (ptr);
}
