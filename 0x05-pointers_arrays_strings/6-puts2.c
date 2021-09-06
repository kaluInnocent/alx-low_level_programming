/**
* puts2 - prints every other character of a string,
* starting with the first character,
* followed by a new line
* @str: string to be printed
* Return: returns nothing
*/
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str = *str + 2;
	}
	_putchar('\n');
}
