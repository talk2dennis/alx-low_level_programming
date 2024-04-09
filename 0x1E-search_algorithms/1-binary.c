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
	while (low < size)
	{
		printf("%lu");
		if (low == size)
			putchar("\n");
		else
			putchar(",");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: pointer to the array
 * @size: the size of the array
 * @value: the number to search
 * Return: the index or (-1)
 */


int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_arr(array, high, low);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
