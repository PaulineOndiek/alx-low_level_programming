#include "main.h"
/**
*print_alphabet - Entry point
*Description: printing alphabets in lowercase
*Return: void
*/
void print_alphabet(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
b++;
}
_putchar('\n');
}
