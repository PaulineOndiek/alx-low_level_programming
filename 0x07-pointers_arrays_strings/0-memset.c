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
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
