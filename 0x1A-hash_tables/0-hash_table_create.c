#include "hash_tables.h"

/**
 * hash_table_create - A function to create hash tables
 * @size: the size of the table
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = calloc(htable->size, sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	for (i = 0; i < htable->size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
