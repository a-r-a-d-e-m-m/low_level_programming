#include <stdio.h>
/**
 *main - prints single digit numbers in base 10 from 0 to 9.
 *Return: success.
 */

int main(void)
{
int b10;

for (b10 = 0; b10 <= 9; ++b10)
printf("%d", b10);
printf("\n");

return (0);
}
