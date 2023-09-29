#include "main.h"

/**
* wildcmp - A function that compares two strings
* @s1: string s1
* @s2: string s2
* Return: int
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '*')
		return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
