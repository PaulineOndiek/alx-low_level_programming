#include "main.h"
#include <stdio.h>
/**
*reverse_array - function that reverses contents of an array
*@a: input
*@n: input
*Return: Empty
*/
void reverse_array(int *a, int n)
{
int m;
int b;
for (m = 0; m < n--; m++)
{
b = a[m];
a[m] = a[n];
a[n] = b;
}
}
