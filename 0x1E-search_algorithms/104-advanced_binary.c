#include "search_algos.h"


/**
 * print_arr - function that prints array of numbers
 * @array: pointer the array to print
 * @size: size of the array
 * @low: point to start printing from
 * Return: nothing
 */

void print_arr(int *array, size_t size, size_t low)
{
	while (low <= size)
	{
		printf("%d", array[low]);
		if (low == size)
			putchar('\n');
		else
			printf(", ");
		low++;
	}
}


/**
 * rec_binary - implements recursive bunary search
 * @array: pointer to the array to search
 * @low: starting point
 * @high: highest point
 * @value: value to search for
 * Return: the index or -1
 *
 */

int rec_binary(int *array, int low, int high, int value)
{
	int mid;

	if (low >= high)
		return (-1);
	mid = (low + high) / 2;
	printf("mid value: %d\n", mid);

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
	{
		print_arr(array, mid - 1, low);
		return (rec_binary(array, low, mid - 1, value));
	}
	else
	{
		print_arr(array, high, mid + 1);
		return (rec_binary(array, mid + 1, low, value));
	}
	return (-1);
}


/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: pointer to the array
 * @size: the size of the array
 * @value: the number to search
 * Return: the index or (-1)
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	print_arr(array, size - 1, 0);
	index = rec_binary(array, 0, size, value);
	return index;
}
