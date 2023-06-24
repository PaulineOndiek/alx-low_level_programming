#include "main.h"
#include <stdio.h>
/**
*main - Entry point
*Return: Fizz if divisible by 3 buzz if divisible
*by 5 and fizzBuzz if divisible by both 3 and 5
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar("%c\n", FizzBuzz);
}
else if (i % 3 == 0)
{
_putchar("%c\n", Fizz);
}
else if (i % 5 == 0)
{
_putchar("%c\n", Buzz);
}
else
{
_putchar(i);
_putchar('\n');
i++
}
}
