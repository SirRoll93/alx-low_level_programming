#include "main.h"

/**
 * print_chessboard - print the dashboard
 * @a: array of characters
 *
 * Description: a function to display the chessboard
 * Return: No return
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
