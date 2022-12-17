#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size - size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			size--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
