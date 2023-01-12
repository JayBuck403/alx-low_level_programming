#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - points to 2 dimensinal array of integers
 *@width: column input
 *@height: row input
 *
 *Return: integer
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int j;
	int k;
	int h;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		i[k] = malloc(sizeof(int) * width);
		if (i[k] == NULL)
		{
			for (j = 0; j < k; j++)
			{
				free(i[j]);
				free(i);
			}
			return (NULL);
		}

		for (h = 0; h < width; h++)
			i[k][h] = 0;
	}
	return (i);
}
