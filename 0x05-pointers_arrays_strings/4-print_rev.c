#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to be reversed
* Return: returns nothing
*/
void print_rev(char *s)
{
	int max;

	for (max = 0; s[max] != '\0'; max++)
	{
	}
	for (max = max - 1; max >= 0; max--)
	{
		_putchar(s[max]);
	}
	_putchar('\n');
}
