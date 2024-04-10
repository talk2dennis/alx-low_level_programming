#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of
 *		 integer using the Jump search algorithm
 * @array: pointer to the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index or -1
 */


int jump_search(int *array, size_t size, int value)
{
	/* j = jump size , l = low, h = high */
	size_t j = 0, l = 0, h = 0;

	j = sqrt(size);
	while (h < size && value > array[h])
	{
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		l = h;
		h += j;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);
	/** use linear search to find the value */
	if (h > size)
		h = size - 1;
	while (l <= h)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}
	return (-1);
}
