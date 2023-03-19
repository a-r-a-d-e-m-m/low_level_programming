#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - tells of a random number is negative, positive or zero.
*Return: success
*/
int main(void)
{
int n;
int d= n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
printf("Last digit of %d is %d greater than 5\n", n, d);

if (n == 0)
printf("Last digit of %d is 0\n", n);

if (n < 6)
printf("Last digit of %d is less than 6 and not 0\n", n);

return (0);
}

