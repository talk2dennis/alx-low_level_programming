#include "main.h"

/**
 * _isdigit - A function that checks for digits character.
 * Return: 1 is uppercase otherwise returns 0
 * @c: integer to check on
 */

int _isdigit(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
