#include "main.h"
/**
* _isupper - function checks for uppercase letter
* @c: parameter to be supplied by user
* Return: return 1 if uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
