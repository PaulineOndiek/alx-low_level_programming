#include "main.h"
/**
* print_line - function that checks for uppercase character.
* @n: is the integer for the paramaters of my function
* Return: 0
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('_');
}
else
{
for (int i = 0; i < n; i++)
{
_putchar('\n');
}
_putchar('\n');
}
}
