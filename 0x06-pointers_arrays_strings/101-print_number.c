#include "main.h"
/**
* print_number - function prints an integer
* @n: number from which the integers are printed
* Return: return nothing
*/
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10 > 0)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
