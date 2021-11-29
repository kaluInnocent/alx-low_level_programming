#include "main.h"
/**
* _puts - functions prints a string, followed by a new line
* @str: string literal to be printed
* Return: returns nothimg
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
