#include "hash_tables.h"

/**
 * hash_table_create - A function to create hash tables
 * @size: the size of the table
 * Return: pointer to the table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
