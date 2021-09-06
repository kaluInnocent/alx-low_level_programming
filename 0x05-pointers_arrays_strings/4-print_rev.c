#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to be reversed
* Return: returns nothing
*/
void print_rev(char *s)
{
	int max;
	while(*s != '\0')
	{
		max++;
		s++;
		while (max-1)
		{
			putchar(s[max]);
			max--;
		}
	}
		_putchar('\n');
}
