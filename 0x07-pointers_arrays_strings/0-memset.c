#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _memset - fills memory with a constant value
*@s: pointer
*@b: value to be set
*@n: number of bytes to be set to the value
*return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
