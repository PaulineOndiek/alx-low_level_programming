#include <stdlib.h>
#include "main.h"
/**
*free_grid - frees a two dimensional grid
*@grid: two dimensional grid
*@height:one section
*Return: void
*/
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
