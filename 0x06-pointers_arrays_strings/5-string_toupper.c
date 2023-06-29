#include "main.h"
#include <stdio.h>
/**
* string_toupper - Converts all strings to uppercase
* @b:Pointer
*Return: b
*/
char *string_toupper(char *b)
{
int a;
a = 0;
while (b[a] != '\0')
{
if (b[a] >= 'a' && b[a] <= 'z')
b[a] = b[a] - 32;
a++;
}
return (b);
}
