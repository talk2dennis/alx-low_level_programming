#include "main.h"

/**
 ** _strstr - A function that returns the poiter to the substring
 * @haystack: A string to search
 * @needle: a substring
 * Return: a pointer to the string found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (*needle == '\0');
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = i, k = 0;
		while (haystack[j] == needle[k])
		{
			if (needle[k + 1] == ' ' || needle[k + 1] == '\0')
				return (&haystack[i]);
			k++;
			j++;
		}
	}
	return (NULL);
}
