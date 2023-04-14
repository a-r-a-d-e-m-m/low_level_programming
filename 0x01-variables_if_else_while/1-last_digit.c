#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - tells if a random number is negative, positive or zero.
*Return: success
*/

int main(void)
{
int n, last_no;

srand(time(0));
n = rand() - RAND_MAX / 2;

last_no = n % 10;

if (last_no > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_no); }

else if (last_no == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_no); }

else if (last_no < 6 && !0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_no); }

return (0);
}
