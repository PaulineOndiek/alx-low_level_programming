#include "main.h"
/**
*  _islower - checks for lowercase characters
* Description: Checks for lowercase characters
* Return: 1 lowercase characters 0 for others
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
_putchar('1');
}
else
{
_putchar('0');
}
_putchar('\n');
}
