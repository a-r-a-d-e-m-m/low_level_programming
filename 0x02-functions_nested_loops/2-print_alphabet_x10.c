#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
char a10;
int i;

i = 0;

while (i < 10)
{
a10 = 'a';
while (a10 <= 'z')
{
_putchar(a10);
a10++;
}
_putchar('\n');
i++;
}
}
