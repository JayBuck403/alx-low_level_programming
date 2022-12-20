#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: length of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		printf("%d, ", a[i]);
	}
}
