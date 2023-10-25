#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: the pointer to the linked list
 * Return: returns the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next = NULL, *prev = NULL;

	node = *head;
	if (head == NULL || *head == NULL)
		return (NULL);
	while (node != NULL)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	*head = prev;
	return (*head);
}
