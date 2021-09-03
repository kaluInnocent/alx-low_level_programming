#include "main.h"
/**
* print_triangle - prints a triangle using #
* @size: size of triangle to be printed
* Return: return nothing
*/
void print_triangle(int size)
{
	int row, column, j;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (j = row + column; j >= 1; j--)
			_putchar('#');
		_putchar('\n');
	}
}
