#include "lists.h"

/**
 * free_listint2 - A function that frees listint of memory allocated
 * @head: the linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *node;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = node;
		node  = node->next;
		free(tmp);
	}
	*head = NULL;
}
