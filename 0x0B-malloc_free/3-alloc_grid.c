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
int i,j;
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
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = j * 0;
}
}
return (grid);
for (i = 0; i < height; i++)
{
free(grid[i]);
}
}
}
