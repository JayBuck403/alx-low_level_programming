#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees allocated memory
 *@grid: 2 dimensional array
 *@height: row input
 *
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
