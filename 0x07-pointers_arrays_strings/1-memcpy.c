#include "main.h"
#include <stdio.h>
/**
*_memcpy - copies memory area
*@dest: destination
*@src: source
*@n: bytes
*Return: returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (a = 0; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
