#include <stdio.h>
/**
*main -Entry point
*Description: Creting numbers with base 10
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar(a + 48);
}
putchar('\n');
return (0);
}
