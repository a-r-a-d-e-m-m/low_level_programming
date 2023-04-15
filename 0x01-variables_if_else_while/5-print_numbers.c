#include <stdio.h>

/**
 *main - prints single digit numbers in base 10 from 0 to 9.
 *Return: a zero.
 */

int main(void)
{

int base10;

for (base10 = 0; base10 <= 9; ++base10)
printf("%d", base10);
printf("\n");

return (0);
}
