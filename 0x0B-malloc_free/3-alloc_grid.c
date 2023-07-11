#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* **alloc_grid - returns a pointer to a two dimensional
*array of integers
*@width: first dimension
*@height: second dimension
*Return: NULL if geight and width is 0 or NULL
*/
int **alloc_grid(int width, int height)
{
int a;
int b;
int **x;
if (width <= 0 || height <= 0)
return (NULL);
x = malloc(sizeof(int *) * height);
if (x == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
x[a] = malloc(sizeof(int) * width);
if (x[a] == NULL)
{
for (a = 0; a >= 0; a--)
free(x[a]);
free(x);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
x[a][b] = 0;
}
return (x);
}
