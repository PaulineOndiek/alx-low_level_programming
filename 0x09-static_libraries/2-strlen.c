#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strlen - Calculates the length of string
*@s: length of string
*Return:Size of length
*/
int _strlen(char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
