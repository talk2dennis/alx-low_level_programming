#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: a string to encode
 * Return: a pointer to the string encoded
 */

char *rot13(char *str)
{
	int i, rot = 13;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = ((str[i] - 'a' + rot) % 26) + 'a';
		i++;
	}
	return (str);
}
