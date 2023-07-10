#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - dynamically creates 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int i, j, r;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
else
{
for (r = 0; r < height; r++)
{
grid[r] = malloc(sizeof(int) * width);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = j * 0;
}

}
return (grid);
}
}
}
