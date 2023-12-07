#include "lists.h"

/**
 * add_dnodeint_end - A function that adds node at the end
 * @head: pointer to the list
 * @n: int data to add
 * Return: dlistint_t
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;
	node->n = n;
	node->next = NULL;
	
	/*
	 * if list is empty
	 */

	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = node;
	node->prev = tmp;
	return (node);
}
