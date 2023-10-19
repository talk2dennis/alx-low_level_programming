#include "lists.h"
/**
 * add_node - A function that add node at the beginning of the list
 * @head: head of the list
 * @str: string to add to the list
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
