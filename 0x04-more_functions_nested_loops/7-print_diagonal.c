#include "main.h"
#include <stdio.h>
/**
*print_diagonal - Prints diagonal line
*@n: the number of times diagonal is printed
*Return: empty
*/
void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
_putchar(92);
}
_putchar(92);
_putchar('\n');
}
}
