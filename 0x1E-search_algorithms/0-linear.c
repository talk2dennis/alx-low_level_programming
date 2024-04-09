#include "search_algos.h"


/**
 * linear_search - function that searches for a value in an array of
 *		   integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: number to search
 * Return: return the index or NULL
 *
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
