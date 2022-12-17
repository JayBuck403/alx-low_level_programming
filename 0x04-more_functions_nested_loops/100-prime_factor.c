#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int j = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		while (j % i == 0 && j != i)
		{
			j /= i;
		}
	}
	printf("%ld\n", j);
	return (0);
}
