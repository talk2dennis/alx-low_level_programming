#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the begining
 * @head: pointer to the head
 * @n: int data
 * Return: returns pointer to list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL)
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
