#include <stdio.h>
/**
*main - prints the alphabet in lower case.
*Return: while loop.
*/

int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);
putchar('\n');
return (0);
}
