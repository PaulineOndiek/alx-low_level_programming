#include "main.h"
#include <stdio.h>
/**
*_strlen_recursion - Prints the length of a string
*@s: String
*Return: Always 0 (Success)
*/
int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
