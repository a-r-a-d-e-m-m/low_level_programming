#include "main.h"

/**
 * _islower - checks for lowercase characterss
 * @c: char that will be checked
 * Return: 1 for lowercase, else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
