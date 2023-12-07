#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns a data at an index
 * @head: pointer to the list
 * @index: int index
 * Return: pointer to the data
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);

	return (get_dnodeint_at_index(head->next, index - 1));
}
