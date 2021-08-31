#include "main.h"
/**
* main - function prints the text "holberton"
*
* Return: return 0
*/
int main(void)
{
	char alx[9] = "_putchar";
	int ch;

	for (ch = 0; ch <= 7; ch++)
	{
		_putchar(alx[ch]);
	}
	_putchar('\n');
	return (0);
}
