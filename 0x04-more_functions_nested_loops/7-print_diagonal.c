#include "main.h"
#include <stdio.h>
/**
*print_diagonal - Prints diagonal line
*@n: the number of times diagonal is printed
*Return: empty
*/
void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(92);
}
_putchar('\n');
}
}
