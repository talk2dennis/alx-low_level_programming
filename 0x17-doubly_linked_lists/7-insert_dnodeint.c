#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns a data at an index
 * @head: pointer to the list
 * @index: int index
 * Return: pointer to the data
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		idx--;
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	node->n = n;
	node->next = tmp->next;
	node->prev = tmp;
	tmp->next->prev = node;
	tmp->next = node;

	return (node);
}
