#include <stdio.h>
/**
 *main - prints the lower case alphabets in reverse.
 *Return: 0.
 */

int main(void)
{
int rc;

for (rc = '0'; rc <= '9'; ++rc)
{
putchar(rc);

if (rc < '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
