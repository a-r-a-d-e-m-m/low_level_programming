#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - tells if a random number is negative, positive or zero.
*Return: success
*/
int main(void)
{
int n, ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ld = n % 10;

if (n > 5)
printf("Last digit of %d is %d greater than 5\n", n, ld);

if (n == 0)
printf("Last digit of %d is 0\n", n);

if (n < 6)
printf("Last digit of %d is less than 6 and not 0\n", n);

return (0);
}
