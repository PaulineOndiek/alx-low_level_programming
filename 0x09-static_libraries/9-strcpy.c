#include "main.h"
#include <stdio.h>
/**
**_strcpy - Copies str pointed by src to buffer pointed to
*by dest
*@dest: Pointing string to be copied
*@src: source of string to be copied
*char: string to be copied
*Return: Character printed
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
