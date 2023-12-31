#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes node at a given index
 * @head: pointer to the list
 * @index: to delete at
 * Return: 1 on succes or -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL && current->next == NULL)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);

}
