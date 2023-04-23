#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to substring or NULL if no substring.
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; ++haystack)

{
char *a = haystack;
char *b = needle;

while (*a == *b && *b != '\0')
{

++a;
++b;
}

if (*b == '\0')
return (haystack);
}

return (0);
}
