#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*print_most_numbers - prints numbers 0 to 9 except 2 and 4
*Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
char i = '0';
while (i <= '9')
{
if (i != '2' && i != '4')
{
_putchar(i);
}
i++;
}
_putchar('\n');
}

