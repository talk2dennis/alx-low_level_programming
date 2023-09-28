#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer n
 * Return: returns int
 */

int find_sqrt(int n, int num);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - a helper function
 * @n: integer n
 * @num: integer num
 * Return: returns int
 */

int find_sqrt(int n, int num)
{
	if (n == num * num)
		return (num);
	if (n < num * num)
		return (-1);
	return (find_sqrt(n, num + 1));
}
