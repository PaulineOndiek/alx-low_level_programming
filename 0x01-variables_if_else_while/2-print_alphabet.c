#include <stdio.h>
/**
*main - Entry point
*Description: Printing alpphabets
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 97;
while (a <= 122)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
