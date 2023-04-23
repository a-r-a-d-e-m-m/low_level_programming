#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @one: an input.
 * @two: another input.
 * Return: 0.
 */

unsigned int _strspn(char *one, char *two)
{
unsigned int u = 0;
int i;

while (*one)
{

for (i = 0; two[i]; i++)
{

if (*one == two[i])
{

++u;
break;
}

else if (two[i + 1] == '\0')
return (u);
}

one++;
}

return (u);
}
