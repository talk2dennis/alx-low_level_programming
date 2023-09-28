#include "main.h"
#include <string.h>

/**
 * find_palindrome - A helper function to find palindrome
 * @start: start position
 * @end: end position
 * Return: int
 */

int find_palindrome(char *start, char *end);

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * @s: a string to check
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	return (find_palindrome(s, s + strlen(s) - 1));
}

/**
 * find_palindrome - A helper function to find palindrome
 * @start: start position
 * @end: end position
 * Return: int
 */

int find_palindrome(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (find_palindrome(start + 1, end - 1));
}
