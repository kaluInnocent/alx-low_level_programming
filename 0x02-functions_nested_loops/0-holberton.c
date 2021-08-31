#include "main.h"
/**
* main - function prints the text "holberton"
*
* Return: return 0
*/
int main(void)
{
	char alx* = "Holberton";
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		_putchar(alx[ch]);
	}
	_putchar('\n');
	return (0);
}
