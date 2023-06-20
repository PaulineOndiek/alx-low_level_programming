#include "main.h"
/**
* print_sign - determines if input is greater than equal to or less than 0
* @c: The input number as an integer
* Return: 1 is greater than 0. zero is 0 and -1 is less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(00);
return (0);
}
_putchar('\n');
}
