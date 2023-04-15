#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of lowercase alphabet with _putchar().
 */

void print_alphabet_x10(void)
{
char alpha;
int i;

for (i = 0; i < 10; i++)
{

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha); }

_putchar('\n'); } }
