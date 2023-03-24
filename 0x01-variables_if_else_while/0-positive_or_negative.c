#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - tells of a random number is negative, positive or zero.
*Return: success
*/
int main(void)
{
int i;

srand(time(0));
i = rand() - RAND_MAX / 2;
/* your code goes there */
if (i > 0)
printf("%d is positive\n", i);

if (i == 0)
printf("%d is zero\n", i);

if (i < 0)
printf("%d is negative\n", i);

return (0);
}
