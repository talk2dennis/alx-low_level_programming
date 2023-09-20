#include "main.h"

/**
 * string_toupper - a function that changes an array to upper case
 * @a: char a
 * Return: Return a pointer to array
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
