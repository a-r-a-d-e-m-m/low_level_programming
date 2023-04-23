#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: an input
 * @size: another input?
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
int s1, s2, v;

s1 = 0;
s2 = 0;

for (v = 0; v < size; ++v)
{
s1 = s1 + a[v * size + v];
}

for (v = size - 1; v >= 0; --v)
{
s2 += a[v * size + (size - v - 1)];
}

printf("%d, %d\n", s1, s2);
}

