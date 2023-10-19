#include "lists.h"
/**
 * add_node_end - A function that add node at the end of the list
 * @head: head of the list
 * @str: const string to add to the list
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *current;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	current = *head;
	while (current->next != NULL)
	{
		current = head->next;
	}
	current->next = node;

	return (head);
}
