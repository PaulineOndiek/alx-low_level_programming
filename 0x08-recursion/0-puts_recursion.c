#include "main.h"
#include <stdio.h>
/**
*_puts_recursion - prints a string followed by a newline
*@s: input
*Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
