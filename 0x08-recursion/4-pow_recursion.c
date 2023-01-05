#include "main.h"

/**
 * _pow_recursion - return the value of x raised to y
 * @x: integer input
 * @y: integer input
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
