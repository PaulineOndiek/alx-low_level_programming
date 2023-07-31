#include "main.h"
/**
* _isalpha - shows 1 if input is alphbet and 0 if it's not
* @c: The character to print
*Return: 1 for alphabtes 0 for the others
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);

_putchar('\n');
}
