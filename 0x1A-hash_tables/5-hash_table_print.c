#include "hash_tables.h"

/**
 * hash_table_print - A function that retrieves data and prints
 * using key from a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	int flag = 1;
	unsigned long int i;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (!flag)
				printf(", ");
			printf("%s: %s", tmp->key, tmp->value);
			flag = 0;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
