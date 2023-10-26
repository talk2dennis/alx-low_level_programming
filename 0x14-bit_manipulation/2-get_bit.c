#include "main.h"

/**
 * get_bit - function that returns the bit of an int at an index
 * @n: the int
 * @index: the index
 * Return: -1 on error or the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(n) * 8;
	if (index >= bit)
		return (-1);
	return ((n >> index) & 1);
}
