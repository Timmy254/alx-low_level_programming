#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 d grid from the heap memory.
 * @grid: 2D array.
 * @height: the number of rows.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
