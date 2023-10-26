#include "main.h"

/**
 * set_bit - function that sets the bit of an int at an index
 * @n: the int
 * @index: the index
 * Return: -1 on error or the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(n) * 8;
	if (index >= bit)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
