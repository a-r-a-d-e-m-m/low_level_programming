#include <stdio.h>

/**
 *main - prints numbers in base 16.
 *Return: 0;
 */

int main(void)
{

char base16a, base16n;

for (base16a = '0'; base16a <= '9'; ++base16a)
{
putchar(base16a); }

for (base16n = 'a'; base16n <= 'f'; ++base16n)
{
putchar(base16n); }

putchar('\n');

return (0); }
