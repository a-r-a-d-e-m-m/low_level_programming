#include "main.h"

/**
 * main - prints all alphabets in lowercase
 *
 * return: 0 is success
 */

void print_alphabet(void)
{
	char lc_alpha;

	for (lc_alpha = 'a'; lc_alpha <= 'z'; lc_alpha++)
		_putchar(lc_alpha);

	_putchar('\n');
}
