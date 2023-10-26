#include "main.h"

/**
 * clear_bit - function that clears the bit of an int at an index
 * @n: the int
 * @index: the index
 * Return: -1 on error or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(n) * 8;
	if (index >= bit)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
