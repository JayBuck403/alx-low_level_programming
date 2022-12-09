#include <stdio.h>

/**
 * main - Prints numbers separated by commas and spaces
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);	
}
