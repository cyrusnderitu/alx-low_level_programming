#include "main.h"

/**
* print_chessboard - function that prints the chessboard
* @a: Pointer to the content of each column of array
*/
void print_chessboard(char (*a)[8])
{
int outer, inner;
for (outer = 0; a[outer][7]; outer++)
{
for (inner = 0; inner < 8; inner++)
_putchar(a[outer][inner]);
_putchar('\n');
}
}

