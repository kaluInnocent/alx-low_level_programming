#include "main.h"
/**
* main - function prints the alphabets
*
* Return: return 0
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
