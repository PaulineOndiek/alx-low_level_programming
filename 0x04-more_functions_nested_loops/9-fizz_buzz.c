#include "main.h"
#include <stdio.h>
/**
*main - Entry point
*Return: Fizz if divisible by 3 buzz if divisible
*by 5 and fizzBuzz if divisible by both 3 and 5
*/
int main(void)
{
int h = 1;
while (h <= 100)
{
if (h % 3 == 0 && h % 5 == 0)
_putchar("FizzBuzz ");
else if (h % 5 == 0)
{
if (h == 100)
{
_putchar("Buzz");
_putchar("\n");
}
else
_putchar("Buzz ");
}
else if (h % 3 == 0)
_putchar("Fizz ");
else
_putchar("%d ", h);
h++;
}
return (0);
}
