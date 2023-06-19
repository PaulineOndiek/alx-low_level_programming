#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description: Program that prints the last digit
*Return: always 0 (Success)
*/
int main(void)
{
int n;
int nm;
srand(time(0));
n = rand() - RAND_MAX / 2;
nm = n % 10;
if (nm > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, nm);
}
else if (nm == 0)
{
printf("Last digit of %d is %d and is 0\n", n, nm);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, nm);
}
return (0);
}
