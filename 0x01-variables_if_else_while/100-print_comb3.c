#include <stdio.h>
/**
 *main - prints unique numbers from 00 to 99.
 *return: 0.
 */

int main(void)
{
int dd, d;
int x = 0;

while (x < 10)
{
putchar('0' + x);
x++;
}

for (dd = 48; dd <= 58; dd++)
{
for (d = 49; d <= 59; ++d)
{
if (dd > d)
{
putchar(dd);
putchar(d);
if (dd != 56 ||  d != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}