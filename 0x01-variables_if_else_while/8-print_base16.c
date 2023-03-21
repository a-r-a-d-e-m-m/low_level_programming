#include <stdio.h>
/**
 *main - prints numbers in base 16.
 *Return: 0;
 */

int main(void)
{
char b16;

for (b16 = '0'; b16 <= 'f'; ++b16)
putchar(b16);
putchar('\n');

return (0);
}
