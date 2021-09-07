#include "main.h"
/**
* puts_half - function prints half of string followed by a newline;
* function prints the second half of the string
* if the umbe of chracters is odd,
* function prints the last n characters of the strings.
* @str: string to but print in half
* Return: returns nothing
*/
void puts_half(char *str)
{
	int len, mid, i;

	for (len = 0; str[len]; len++)
	{

	}
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len + 1) / 2;
	for (i = mid; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
