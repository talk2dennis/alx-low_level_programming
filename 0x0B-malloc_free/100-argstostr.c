 #include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: arg count
 * @av: arg values
 * Return: pointer to concat strings
 *
 */


char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		n += strlen(av[i]);
	ptr = malloc((sizeof(char) * n) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			*ptr++;
		}
		if (av[i][j] == '\0')
			*ptr = av[i][j];
	}
	*ptr = '\0';
	return (ptr - n);
}
