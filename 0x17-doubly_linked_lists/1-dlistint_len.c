#include "lists.h"

/**
 * dlistint_len - A function that prints double linked list
 * @h: pointer to the list
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *current;
	size_t n = 0;

	current = h;
	while (current)
	{
		current = current->next;
		n++;
	}
	return (n);
}
