#include "main.h"
#include <stdio.h>
/**
*_strchr - Locates a character in a string
*@s: string
*@c: character
*Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
int a = 0;
for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
