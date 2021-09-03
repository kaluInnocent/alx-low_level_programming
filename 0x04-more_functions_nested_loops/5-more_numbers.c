#include "main.h"
/**
* more_numbers -  prints 10 times the numbers 0-14 except 2 and 4
* followed by a newline
* Return: return nothing
*/
void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
