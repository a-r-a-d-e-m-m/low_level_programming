#include <stdio.h>
/**
 *main - prints numbers in base 16.
 *Return: 0;
 */

int main(void)
{
char b16a, b16n;

for (b16a = '0'; b16a <= '9'; ++b16a)
putchar(b16a);

for (b16n = 'a'; b16n <= 'f'; ++b16n)
putchar(b16n);
putchar('\n');

return (0);
}
