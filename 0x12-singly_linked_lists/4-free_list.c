#include "lists.h"
/**
 * free_list - A function to print out all the elements of a list
 * @head: list to print out the elements
 * Return: nothing
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
