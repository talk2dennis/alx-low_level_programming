#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the begining of the list
 * @head: the list
 * @n: the data to add
 * Return: pointer to the list or NULL is it failsi
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
