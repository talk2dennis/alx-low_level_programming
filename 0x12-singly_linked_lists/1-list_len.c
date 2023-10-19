#include "lists.h"
/**
 * list_len - A function to return the length of elements of a list
 * @h: list
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
