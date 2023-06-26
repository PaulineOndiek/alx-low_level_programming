#include "main.h"
#include <stdio.h>
/**
*swap_int - Swaps two integers
*@a: integer to be swapped with b
*@b: integer to be swaped with a
*Return: Empty
*/
void swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;
}
