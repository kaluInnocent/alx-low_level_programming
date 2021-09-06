#include "main.h"
/**
* puts2 - prints every other character of a string,
* starting with the first character,
* followed by a new line
* @str: string to be printed
* Return: returns nothing
*/
void puts2(char *str)
{
	int len, i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
