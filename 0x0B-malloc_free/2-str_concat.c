#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
**str_concat - function that concatenates two strings
*@s1: first string
*@s2: Second string
*Return: concatenated string
*/
char *str_concat(char *s1, char *s2)
{
int a;
int b;
char *x;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = b = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
x = malloc(sizeof(char) * (a + b + 1));
if (x == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
x[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
x[a] = s2[b];
a++, b++;
}
x[a] = '\0';
return (x);
}
