#include <stdio.h>
/**
*main - prints the alphabet in loer case except q and e.
*Return: A success.
*/

int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'q' && lc != 'e')
putchar(lc);
}
putchar('\n');
return (0);
}
