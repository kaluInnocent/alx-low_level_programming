#include "main.h"
#include <stdio.h>

/**
* reverse_str - function reverses a string
* @str: string to be reversed
* Return: a pointer to string array
*/
char *reverse_str(char *str)
{
	int len, i;
	char temp;

	for (len = 0; srt[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++, len--)
	{
		temp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = temp;
	}
	str[i] = '\0';
	return (str);
}

/**
* putbase - function sends charcter to be written on std output
* @str: string to be parsed
* Return: nothing
*/
void putbase(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
* base_len - function calculates the length of a base system 
* @num: number whose length is to be determined
* @base: The number base of the number
* Return: the length of the number
*/
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}
	return (i);
}
