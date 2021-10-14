#include <unistd.h>

/**
* _putchar - function writes the character to stdout
* @c: The character to be printed to stdout
* Return: 1 on success or -1 otherwise
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
