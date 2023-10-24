#include "lists.h"

/**
 * listint_len - function that returns the length of a linked list
 * @h: the linked list to return the length
 * Return: the length of the list in int
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
