#include <stdio.h>

/**
*main - prints the alphabet in lower and then upper case.
*Return: a zero.
*/

int main(void)
{

char alphcase;

for (alphcase = 'a'; alphcase <= 'z'; alphcase++)
{
putchar(alphcase); }

for (alphcase = 'A'; alphcase <= 'Z'; alphcase++)
{
putchar(alphcase); }

putchar('\n');

return (0);
}
