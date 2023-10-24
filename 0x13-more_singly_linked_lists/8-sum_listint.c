#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a list
 * @head: the list
 * Return: sum of all the data
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
