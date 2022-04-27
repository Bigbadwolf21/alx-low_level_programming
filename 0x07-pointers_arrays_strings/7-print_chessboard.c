#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declare variables*/
	int i, j;

	i = 0;
	while (i < 8) /*declare while loop to repeat numbers */
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n'); /*print new line*/
		i++; /* increments i by 1 */
	}

}
