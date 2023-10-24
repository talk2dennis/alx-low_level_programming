#include "lists.h"

/**
 * free_listint - A function that frees listint of memory allocated
 * @head: the linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
