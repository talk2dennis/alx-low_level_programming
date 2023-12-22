#include "hash_tables.h"

/**
 * hash_table_delete - A function that delets data using key from a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *current;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
