#include "hash_tables.h"

/**
 * hash_table_set - A function that updates a data or sets new data\
 * to a hash table bucket
 * @key: string to use to get index
 * @value: string value to store
 * @ht: pointer to the table
 * Return: (1) if successful otherwise (0)
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
}
