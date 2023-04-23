#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @a: The char to print
 *
 * Return: 1 for success.
 * On error, -1 is returned, and err number is set appropriately.
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
