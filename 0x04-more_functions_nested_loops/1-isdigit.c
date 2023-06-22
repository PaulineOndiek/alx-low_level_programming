#include "main.h"
#include <stdio.h>
/**
*_isdigit - checks if an input is a digit or not
*@c: input
*Return: 1 if input is a digit and 0 if otherwise
*/
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
