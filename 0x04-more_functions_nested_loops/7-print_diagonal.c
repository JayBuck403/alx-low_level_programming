#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: input
 * Return: void
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		while (n > 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar(92);
		n--;
	}
	_putchar('\n');
	
}
