#include <stdio.h>

/**
 * main - Prints possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 49; l <= 57; l++)
				{
					if (i <= j && j <= k && k <= l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
