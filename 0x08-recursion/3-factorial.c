#include "main.h"
#include <stdio.h>
/**
*factorial - Prints the factorials
*@n: input
*Return: factorials
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
