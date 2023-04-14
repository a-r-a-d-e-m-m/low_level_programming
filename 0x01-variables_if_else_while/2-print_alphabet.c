#include <stdio.h>

/**
*main - prints the alphabet in lower case.
*Return: a zero.
*/

int main(void)
{

char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)

putchar(lowercase);
putchar('\n');

return (0);
}
