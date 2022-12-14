#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: input
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
		{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		}
		_putchar(n + '0');
	}
}
