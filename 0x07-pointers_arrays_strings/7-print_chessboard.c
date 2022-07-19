#include "main.h"

/**
* print_chessboard - function that prints the chessboard
* @a: Pointer to the content of each column of array
* Return: Zero return
*/
void print_chessboard(char (*a)[8])
{
unsigned int col, row = 0;
for (col = 0; col < 64; col++) // Total number is 8 column items (r,k,b,q,k,b,k,r) in 8 row = 8 * 8 = 64
{
if (col % 8 == 0 && col != 0) // Once it reaches the 8th column item (r,k,b,q,k,b,k,r) it should move to next line
{
row = col;
_putchar('\n');
}
_putchar(a[col / 8][col - row]);
}
_putchar('\n');
}
