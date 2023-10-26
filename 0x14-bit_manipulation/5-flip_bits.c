#include "main.h"

/**
 * flip_bits - a function that flips bit and return the number of bits flipped
 * @n: number to flip bits
 * @m: number of bits to flip
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bit = n ^ m;

	printf("%lu\n", bit);
	while (bits > 0)
	{
		count += bit & 1;
		bit >>= 1;
	}
	return (count);
}
