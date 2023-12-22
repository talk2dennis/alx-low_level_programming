#include "hash_tables.h"

/*
 * key_index - A function that uses hash function to return index for our table
 * @key_index: a pointer to strings
 * @size: the size of the table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size <= 0)
		return (0)
	return (hash_djb2(key) % size);
}
