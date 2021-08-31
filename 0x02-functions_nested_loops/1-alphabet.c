#include "main.h"
/**
* print_alphabet - function prints the alphabets
* prints the alphabets in lower case
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
