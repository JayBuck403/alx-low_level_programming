#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	
	if (n < 0)
	{
		_putchar(45);
		i = i * -1;
	}
	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}

	for (; k >= 1; k /= 10)
	{
		_putchar(((i / k) % 10) + 48);
	}
}
	
