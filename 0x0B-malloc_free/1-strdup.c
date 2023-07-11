#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
**_strdup - a function that returns a pointer to a newly allocated
*space in memory
*@str: string
*Return: NULL if str is NULL
*/
char *_strdup(char *str)
{
char *a;
int i = 0;
int x = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
a = malloc(sizeof(char) * (i + 1));
if (a == NULL)
return (NULL);
for (x = 0; str[x]; x++)
a[x] = str[x];
return (a);
}
