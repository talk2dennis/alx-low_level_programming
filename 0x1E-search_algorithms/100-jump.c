#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of integers
 *		 using the Jump search algorithm
 * @array: pointer to the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index or -1
 */


int jump_search(int *array, size_t size, int value)
{
	/* j = jump size , l = low, h = high */
	int j = 0, l = 0, h = size - 1;

	while (l <= h)
	{
		
		j = sqrt(h);
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			h = j - 1;
		else
			l = j + 1; 
	}
	return (-1);
}
