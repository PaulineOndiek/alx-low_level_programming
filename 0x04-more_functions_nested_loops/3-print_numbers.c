#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*print_numbers - prints characters between 0 and 9
*Description: Function to print numbers from 0 to 9
*Return: Always 0 (Success)
*/
void print_numbers(void)
{
int i;
for (i = 0; i >= 9; i++)
{
_putchar(i);
_putchar('\n');
}
}
