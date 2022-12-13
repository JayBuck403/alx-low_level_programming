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
	int last_digit = n % 10;

	if (n > 0)
	{
		return (last_digit);
	}
	else if (n < 0)
	{
		return (-1 * (n % 10));
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit + 0);
	}
}
