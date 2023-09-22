#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: a string to encode
 * Return: a pointer to the string encoded
 */

char *rot13(char *str)
{
	int i, j;
	char map[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != 0)
	{
		for (j = 0; map[j] != '\0'; j++)
		{
			if (str[i] == map[j])
				str[i] = rot13[j];
		}
		i++;
	}
	return (str);
}
