#include <stdio.h>
/**
*main - Entry point
*Description: A script to list all alphabets except q and e
*Return: always 0 (Success)
*/
int main(void)
{
int a = 97;
while (a <= 122)
{
if (a == 101 || a == 113)
{
a++;
continue;
}
putchar(a);
a++;
}
putchar('\n');
return (0);
}
