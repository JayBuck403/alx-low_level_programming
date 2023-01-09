#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number to be computered
 *
 * Return: absolute value
 */

int _abs(int n)
{
	int a = n * -1;

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
