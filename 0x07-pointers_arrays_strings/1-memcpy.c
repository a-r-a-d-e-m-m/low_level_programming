#include "main.h"

/**
 *_memcpy - copies memory area.
 *@Dest: stored memory.
 *@source: copied memory.
 *@n: number of bytes.
 *Return: the copied memory with n bytes changed.
 */

char *_memcpy(char *Dest, char *source, unsigned int n)
{
int b = 0;
int i = n;

for (; b < i; ++b)
{
Dest[b] = source[b];
--n;
}

return (Dest);
}
