#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: unsigned Integer
 * @size: size of memory to allocate
 * Return: void pointer
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int nsize = 0, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nsize = nmemb * size;
	ptr = malloc(nsize);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nsize; i++)
		ptr[i] = 0;
	return (ptr);
}
