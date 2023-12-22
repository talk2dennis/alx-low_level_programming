#include "hash_tables.h"

/**
 * key_index - A function thats takes a key string and
 *             returns an index int which determines the where data is stored
 * @key: the index
 * @size: int size
 *
 * Return: The index of the key
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	if (!key || size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
