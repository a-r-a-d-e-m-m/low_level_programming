#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase using _putchar().
 * Return: void.
 */

void print_alphabet(void)
{

char lc_alpha;

for (lc_alpha = 'a'; lc_alpha <= 'z'; lc_alpha++)
{
_putchar(lc_alpha); }

_putchar('\n');
}
