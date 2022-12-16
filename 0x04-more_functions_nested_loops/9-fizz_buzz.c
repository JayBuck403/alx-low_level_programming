#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 * fizz_buzz - prints fizz buzz for multipls of 3 and 5
 * Return: void
 */

int main(void)
{
	fizz_buzz();

	return (0);
}

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
