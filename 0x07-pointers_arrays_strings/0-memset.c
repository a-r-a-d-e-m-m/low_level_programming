#include "main.h"
#include <string.h>

/**
 *_memset - fills memory with a constant byte
 *return: Ever 0.
 */

char *_memset(char *no1, char c, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
no1[i] = c;
n--;
}

return (no1);
}
