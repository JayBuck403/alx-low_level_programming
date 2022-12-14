#include <stdio.h>
/**
  * main - prints the sum of even fibonacci
  * Return: 0
  */
int main(void)
{
	unsigned long n;
	unsigned long i;
	unsigned long j;
	unsigned long k;
	unsigned long sum;

	i = 0;
	sum = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
