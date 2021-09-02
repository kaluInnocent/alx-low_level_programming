#include "main.h"
/**
* more_numbers -  prints 10 times the numbers 0-14 except 2 and 4
* followed by a newline
* Return: return nothing
*/
void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '14'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
