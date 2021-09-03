#include "main.h"
/**
* print_triangle - prints a triangle using #
* @size: size of triangle to be printed
* Return: return nothing
*/
void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
		{
			_putchar(' ');
		}
		for (i = row + column; i >= 1; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
