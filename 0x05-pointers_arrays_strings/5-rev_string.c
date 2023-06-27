#include "main.h"
#include <stdio.h>
/**
*rev_string - Reverses a string
*@s: the string to reverse
*Return: Empty
*/
void rev_string(char *s)
{
int i;
int num = 0;
char temp = s[0];
while (s[num] != '\0')
num++;
for (i = 0; i < num; i++)
{
num--;
temp = s[i];
s[i] = s[num];
s[num] =temp;
}
}
