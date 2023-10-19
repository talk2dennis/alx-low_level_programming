#include "lists.h"
/**
 * print_list - A function to print out all the elements of a list
 * @h: list to print out the elements
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	char *str;
	int len;
	size_t count = 0;

	while (h != NULL)
	{
		str = h->str;
		len = h->len;
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		printf("[%d] %s\n", len, str);
		h = h->next;
		count++;
	}
	return (count);
}
