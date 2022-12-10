#include <stdio.h>

/**
 * main - Print combinations of numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i < j)
			{
					putchar(i);
					putchar(j);
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
