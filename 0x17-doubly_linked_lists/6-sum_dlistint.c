#include "lists.h"

/**
 * sum_dlistint - A function that returns a data at an index
 * @head: pointer to the list
 * Return: int - sum of all the numbers
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
