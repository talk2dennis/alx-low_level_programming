#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * Return: 1 is uppercase otherwise returns 0
 * @c: integer to check on
 */

int _isupper(int c)
{

	if (c >= 65 || c <= 90)
		return (1);
	else
		return (0);
}
