#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number
 * @n: int n
 * @num: int num
 * Return: 1 if prime and 0 if otherwisw
 */

int find_prime(int n, int num);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (find_prime(n, 2));
}

/**
 * find_prime - A helper function
 * @n: int n
 * @num: int num
 * Return: int
 */

int find_prime(int n, int num)
{
	if (num >= n)
		return (1);
	if (n % num == 0)
		return (0);
	return (find_prime(n, num + 1));
}
