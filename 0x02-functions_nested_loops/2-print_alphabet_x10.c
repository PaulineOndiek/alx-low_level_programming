#include "main.h"
/**
*print_alphabet_x10 - prints alphabets in lowercase
*Description: printing alphabets in lowercase
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int a;
int b;
for (b = 1; b <= 10; b++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
