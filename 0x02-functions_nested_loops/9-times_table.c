#include "main.h"
/**
* times_table - function prints 9 times table, starting with 0
*
* Return: returns nothing
*/
void times_table(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
