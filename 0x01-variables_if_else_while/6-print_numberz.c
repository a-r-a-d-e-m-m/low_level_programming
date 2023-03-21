#include <stdio.h>
/**
 *main - prints base 10 numbers from 0 to 9 using putchar.
 *Return: success
 */
int main(void)
{
int pb10;

for (pb10 = '0'; pb10 <= '9'; ++pb10)
putchar(pb10);
putchar('\n');

return (0);
}
