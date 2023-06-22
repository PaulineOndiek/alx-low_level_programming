#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*more_numbers - prints numbers from 0 to 14
*and multiplies the result by 10
*Return: Always 0 (Success)
*/
void more_numbers(void)
{
int i = 0;
while (i <= 14)
{
_putchar(i * 10);
i++;
}
_putchar('\n');
}
