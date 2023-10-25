#include "lists.h"

/**
 * print_listint_safe - a function that prints safe list of a linked list
 * @head: the pointer to the list
 * Return: returns the size of the node or 98 on error
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (prev && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)prev->next, prev->n);
		count++;
		prev = prev->next;
		fast = fast->next->next;

		if (prev == fast)
			return (98);
	}
	return (count);
}
