#include "main.h"

/**
 * prime_number - checks if a number is prime
 * @i: integer input
 * @n: integer input
 *
 * Return: integer
 */

int prime_number(int i, int n)
{
	if (n < 2 || !(n % i))
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (prime(i + 1, n));
}

/**
 * is_prime_number - checks for prime integers
 * @n: integer input
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
