#include <stdio.h>

/**
 *main - prints the lower case alphabets in reverse.
 *Return: 0.
 */

int main(void)
{

char lowercase;

for (lowercase = 'z'; lowercase >= 'a'; --lowercase)
putchar (lowercase);
putchar ('\n');

return (0);
}
