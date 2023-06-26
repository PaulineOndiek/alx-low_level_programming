#include "main.h"
#include <stdio.h>
/**
*rev_string - Reverses a string
*@s: the string to reverse
*Return: Empty
*/
void rev_string(char *s)
{
int len = 0;
int num = 0;
char temp;
while (s[num++])
len++;
for (num = len - 1; num >= len / 2; num--)
{
temp = s[num];
s[num] = s[len - num - 1];
s[len - num - 1] = temp;
}
}
