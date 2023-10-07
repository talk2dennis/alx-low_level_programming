#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: integer min
 * @max: integer max
 * Return: pointer to integer
 */


int *array_range(int min, int max)
{
	int size, i, *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
