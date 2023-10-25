#include "lists.h"

/**
 * free_listint2 - A function that frees listint of memory allocated
 * @head: the linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
