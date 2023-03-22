#include "main.h"

/**
 * print_alphabet - prints all the alphabet in lowercase.
 */

void print_alphabet(void)
{
	char lc_alpha;

	for (lc_alpha = 'a'; lc_alpha <= 'z'; lc_alpha++)
		_putchar(lc_alpha);

	_putchar('\n');
}
