#include <stdio.h>

/**
 * print_diagsums - this prints sum of the two diagonals of a square matrix.
 * @a: a pointerer
 * @size: number of rows or columns
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
int s1, s2, v;

s1 = 0;
s2 = 0;

for (v = 0; v < size; ++v)
{
s1 += *(a + i * size + i);

s2 += *(a + i * size + (size - i - 1));
}

printf("%d, %d\n", s1, s2);
}

