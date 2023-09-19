#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big 1 if small
 */
int get_endianness(void)
{
unsigned int a = 1;
char *b = (char *) &a;
return (*b);
}
