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
c = 'C';
printf("Return value when uppercase char %c is passed: %d", c, isupper(c));
c = '+';
printf("\nReturn value when another char %c is passed: %d", c, isupper(c));
return (0);
}
