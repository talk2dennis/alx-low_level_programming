#include "lists.h"

/**
 * add_nodeint - a function that adds a node to the end of a list
 * @head: the list to add a node
 * @n: the data
 * Return: Return pointer to list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (last == NULL)
	{
		*head = node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = node;
	return (*head);
}
