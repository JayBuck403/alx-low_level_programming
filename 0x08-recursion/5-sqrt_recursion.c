#include "main.h"


int square(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input
 *
 * Return: integer
 */


int _sqrt_recursion(int n)
{
	return (square(1, n));
}

/**
 * square - square of a number conditions
 * @a: interger input
 * @b: integer input
 *
 * Return: integer
 */


int square(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a > b / 2)
	{
	return (-1);
	}
	return (square(a + 1, b));
}
