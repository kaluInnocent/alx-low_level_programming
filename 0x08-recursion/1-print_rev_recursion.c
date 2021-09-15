#include "main.h"
/**
* _print_rev_recursion - function prints the reverse of a string
* @s: string to be reversed
* Return: functions returns nothin
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
