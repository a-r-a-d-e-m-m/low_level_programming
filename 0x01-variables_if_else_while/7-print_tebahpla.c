#include <stdio.h>
/**
 *main - prints the lower case alphabets in reverse.
 *Return: 0.
 */

int main(void)
{
char rc;

for (rc = 'z'; rc >= 'a'; --rc)

putchar (rc);
putchar ('\n');

return (0);
}
