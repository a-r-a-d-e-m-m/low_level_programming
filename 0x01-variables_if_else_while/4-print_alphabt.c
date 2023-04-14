#include <stdio.h>

/**
*main - prints the alphabet in loer case except q and e.
*Return: a zero.
*/

int main(void)
{

char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != 'q' && lowercase != 'e')
putchar(lowercase); }

putchar('\n');

return (0); }
