#include "main.h"
/**
* _islower - checks for lowercase characters
* @c: The character to print
*Return: 1 for lowercase characters and 0 for anything else
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
