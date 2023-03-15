#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimentional array
 * @width: width of array
 * @height: height of array
 * Return: Null on failure, Null inf width and height is 0
 */

int **alloc_grid(int width, int height)
{
/*Declaring variables*/
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height); /*malloc*/

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; j < width; j++)
grid[i][j] = 0;
return (grid);
}

