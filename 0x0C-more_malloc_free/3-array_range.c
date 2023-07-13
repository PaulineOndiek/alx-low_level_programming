#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - Creates an array of integers
*@min: minumum value
*@max: maximum value
*Return: range of values between min and max
*/
int *array_range(int min, int max)
{
int *p;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
return (NULL);
for (i = 0; min <= max; i++)
p[i] = min++;
return (p);
}
