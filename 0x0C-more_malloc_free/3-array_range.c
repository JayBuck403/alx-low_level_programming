#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: integer input
 *@max: integer input
 *
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *i;
	int j;
	int y;
	int x = 0;

	j = max - min + 1;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(int) * j);

	if (i == 0)
		return (NULL);

	y = min;

	for (x = 0; x < j; x++)
	{
		i[x] = y;
		y++;
	}

	return (i);
}
