#include <stdio.h>
/**
*main - Entry point
*Description: adds all the multiple of 5
*and 3 excluding 1024
*Return: Always 0 (Success)
*/
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
