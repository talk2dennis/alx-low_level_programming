#include "lists.h"

/**
 * pot_listint - a function that detates the head of a node
 * @head: the list
 * Return: the node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
