#include "main.h"

/**
 * _islower - a function to check if a char is lowercase or not
 * @c: is a char argurement
 * Return: returns 1 (true) 0 (false)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
