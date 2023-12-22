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
	hash_node_t *tmp, *current;
	char *copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = copy;
			return (1);
		}
		current = current->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(copy);
		return (0);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(copy);
		free(tmp);
		return (0);
	}
	tmp->value = copy;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);

}
