#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of prefix substring
*@s: string
*@accept: prefix
*Return: Alway 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
{
a++;
break;
}
else if (accept[b + 1] == '\0')
return (a);
}
s++;
}
return (a);
}
