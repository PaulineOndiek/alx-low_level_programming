#include "main.h"
#include <stdio.h>
/**
*_puts - Function to print a string to stdout
*@str: String to be printed
*Return: Empty
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
{
_putchar('\n');
}
}
