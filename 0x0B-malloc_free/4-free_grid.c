#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory created by alloc_grid
 * @grid: pointer to grid
 * @height: rows in the grid
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
