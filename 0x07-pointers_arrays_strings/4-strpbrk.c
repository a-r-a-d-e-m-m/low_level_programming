#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @wan: an input.
 * @chu: another input.
 * Return: 0.
 */

char *_strpbrk(char *wan, char *chu)
{
int i;

while (*wan)
{

for (i = 0; chu[i]; i++)
{

if (*wan == chu[i])
return (wan);
}

++wan;
		}
return ('\0');
}
