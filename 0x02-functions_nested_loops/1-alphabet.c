#include "main.h"
/**
*print_alphabet - prints alphabets in lowercase
*Description: printing alphabets in lowercase
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
