#include "lists.h"

/**
 * print_dlistint - A function that prints double linked list
 * @h: pointer to the list
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *current;
	size_t n = 0;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
