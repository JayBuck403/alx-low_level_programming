#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
