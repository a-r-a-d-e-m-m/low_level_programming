#include <stdio.h>

/**
 *main - prints base 10 numbers from 0 to 9 using putchar.
 *Return: success
 */

int main(void)
{

int base10;

for (base10 = '0'; base10 <= '9'; ++base10)
putchar(base10);
putchar('\n');

return (0);
}
