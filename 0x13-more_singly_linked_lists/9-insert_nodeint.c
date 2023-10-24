#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a node at an index
 * @head: a pointer to the linked list
 * @idx: the index to add node at
 * @n: the data to add
 * Return: pointer to the list after adding the data
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node = *head;
		*head = node;
		return (*head);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = current->next;
	current->next = node;

	return (*head);
}
