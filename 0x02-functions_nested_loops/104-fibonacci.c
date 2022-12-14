#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: 0
  */

int main(void)
{
	int c;
	unsigned long i;
	unsigned long j;
	unsigned long k;
	unsigned long m;
	unsigned long n;
	unsigned long p;
	unsigned long rem;

	c = 0;
	i = 0;
	j = 1;
	for (c = 1; c <= 91; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (c <= 98)
	{
		rem = (c + n) / 1000;
		p = (m + n) - rem * 1000;
		k = (i + j) + rem;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
		{
			printf("%lu%lu", k, p);
		}
		else
		{
			printf("%lu0%lu", k, p);
		}
		if (c != 98)
			printf(", ");
		c++;
	}
	putchar('\n');
	return (0);
}
