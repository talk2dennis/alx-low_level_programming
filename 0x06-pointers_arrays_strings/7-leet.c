#include "main.h"

/**
 * leet - a function that replaces the vowels with number
 * @a: a char a
 * Return: returns a pointer to char a
 */

char *leet(char *a)
{
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if ("AEOTL"[j] == a[i] || "aeotl"[j] == a[i])
			{
				a[i] = "43071"[j];
				break;
			}
		}

		i++;
	}
	return (a);
}
