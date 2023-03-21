#include <stdio.h>
/**
*main - prints the alphabet in lower and then upper case.
*Return: A success.
*/

int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);

for (lc = 'A'; lc <= 'Z'; lc++)
putchar(lc);
putchar('\n');
return (0);
}
