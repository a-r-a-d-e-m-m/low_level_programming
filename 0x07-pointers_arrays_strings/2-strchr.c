#include "main.h"

/**
 *_strchr - locates a character in a string.
 *@one: an input.
 *@too: another input.
 *Return: 0.
 */

char *_strchr(char *one, char too)
{
int n = 0;

for (; one[n] >= '\0'; ++n)
{
if (one[n] == too)
return (&one[n]);
}

return (0);
}
