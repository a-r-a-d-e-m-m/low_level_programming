#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char to check
 * Return: 1 c is a letter, else 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
