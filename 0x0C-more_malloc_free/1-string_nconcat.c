#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: integer
*Return: result after concatenation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, a = 0, len1 = 0, len2 = 0;
char *p;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
p = malloc(sizeof(char) * (len1 + n + 1));
else
p = malloc(sizeof(char) * (len1 + len2 + 1));
if (!p)
return (NULL);
while (i < len1)
{
p[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
p[i++] = s2[a++];
while (n >= len2 && i < (len1 + len2))
p[i++] = s2[a++];
p[i] = '\0';
return (p);
}
