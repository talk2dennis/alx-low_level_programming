#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a list
 * h: the list to print
 * Return: the number of nodes printed
 * /


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h->next == NULL)
	{
		printf("%d", h->next);
		count++;	
	}
	return (count);
} 
