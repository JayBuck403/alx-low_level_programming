#include "main.h"

/**
 * print_alphabet_x10 prints  lowercase alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
		j++;
	}	
}
