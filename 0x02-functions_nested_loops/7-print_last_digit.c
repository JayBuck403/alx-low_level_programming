#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to be computed
 *
 * Return: last_digit
 */

int print_last_digit(int n)
{

	if (n > 0)
	{
		return (n % 10);
	}
	else if (n < 0)
	{
		return ((n % 10) * -1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
