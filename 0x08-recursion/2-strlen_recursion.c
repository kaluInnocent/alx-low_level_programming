#include "main.h"
/**
* _strlen_recursion - fucntion prints the length of a string
* @s: string whos length is to be printed
* Return: returns length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
