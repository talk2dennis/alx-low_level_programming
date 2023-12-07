#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that inserts node at index
 * @head: pointer to the list
 * @index: int index
 * Return: pointer to the data
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		index--;
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);

	return (1);
}
