#include <stdio.h>
/**
*main - Entry point
*Description: printing alphabets in lowercase
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 97;
for (a = 97; a <= 122; a++)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
