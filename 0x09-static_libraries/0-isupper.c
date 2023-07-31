#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* _isupper - checks if input is uppercase or not
*@c:the input
* Return: 1 if uppercase 0 otherwise
*/
int _isupper(int c)
{
if (isupper(c))
return (1);
else
return (0);
}
