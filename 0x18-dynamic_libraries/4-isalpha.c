#include "main.h"

/**
 * _isalpha - a function to check if a char is an alphabet or not
 * @c: is a char argurement
 * Return: returns 1 (true) 0 (false)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
