#include "lists.h"

/**
 * free_listint2 - A function that frees listint of memory allocated
 * @head: the linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
