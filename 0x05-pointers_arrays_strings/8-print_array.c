#include <stdio.h>
#include "main.h"

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
