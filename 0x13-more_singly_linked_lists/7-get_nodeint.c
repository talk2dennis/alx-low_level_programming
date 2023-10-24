#include "lists.h"

/**
 * get_nodeint_at_index - a function to return the data and a particular node
 * @head: the list
 * @index: the index to return
 * Return: pointer to the index;
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = malloc(sizeof(listint_t));
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			node->n = head->n;
			node->next = NULL;
			return (node);
		}
		count++;
		head = head->next;
	}
	free(node);
	return (NULL);
}
