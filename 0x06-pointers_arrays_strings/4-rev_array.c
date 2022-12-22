#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a - array of integers
 * @n - number of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	n -= 1;

	while (i < n)
	{
		k = a[i];
		j = a[n];
		a[n] = k;
		a[i] = j;
		i++;
		n--;
	}
}
