#include "lists.h"

/**
 * free_dlistint - A function that frees doubly linked list
 * @head: pointer to the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
