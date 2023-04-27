#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: an array.
 * Return: 0.
 */

void print_chessboard(char (*a)[8])
{
int b;
int c;

for (b = 0; b < 8; ++b)
{
for (c = 0; c < 8; ++c)
{
_putchar(a[b][c]);
_putchar("\n"); } } }

int main(void)
{
char chessboard[8][8] = {
{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};
print_chessboard(chessboard);
return (0);
}
