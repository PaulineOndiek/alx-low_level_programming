#include <stdio.h>
/**
*main - Entry point
*Description: Script for printing lower case alphabets in reverse
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 122;
while (a >= 97)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
