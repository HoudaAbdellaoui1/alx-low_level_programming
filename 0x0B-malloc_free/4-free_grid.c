#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free memory allocated for a 2D grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
int i = 0;
if (grid != NULL)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
