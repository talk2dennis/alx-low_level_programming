#include "lists.h"
/**
 * print_list - A function to print out all the elements of a list
 * @h: list to print out the elements
 * Return: the size of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
