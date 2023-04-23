#include "main.h"
#include <string.h>

/**
 *_memset - fills memory with a constant byte
 *@s: start address to be filled
 *@b: value we want
 *@n: number of bytes that gets changed
 *
 *Return: Ever 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; ++i)
{
s[i] = b;
--n;
}

return (s);
}
