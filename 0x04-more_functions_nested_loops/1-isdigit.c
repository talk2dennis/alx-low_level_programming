#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: an integer that will be checked upon
 * Return: 1 is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
