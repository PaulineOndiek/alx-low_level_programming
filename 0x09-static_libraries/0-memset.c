#include "main.h"
#include <stdio.h>
/**
*_memset - fills memory with a constant value
*@s: starting address
*@b: value to be set
*@n: number of bytes to be set
*Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
n--;
}
return (s);
}
