#include "main.h"

/**
 *_memcpy - copies memory area.
 *@src: copied memory.
 *@dest:sstored memory.
 *@n: number of bytes.
 *Return: the copied memory with n bytes changed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int b = 0;
int i = n;

for (; b < i; ++b)
{
dest[b] = src[b];
--n;
}

return (dest);
}
