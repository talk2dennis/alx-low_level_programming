#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * Return: returns integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (NULL);
	if (size <= 0)
	       	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (array[i]);
	}
	return (-1);
}
