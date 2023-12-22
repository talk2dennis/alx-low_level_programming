#include "hash_tables.h"

/**
 * hash_table_print - A function that retrieves data and prints
 * using key from a hash table
 *
 * @ht: pointer to hash table
 * @key: pointer to key
 * 
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s:%s", tmp->key, tmp->value);
			if (i < ht->size -1)
                        	printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
