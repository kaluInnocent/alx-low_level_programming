#include "main.h"
/**
* _isdigit: function checks if a number is a digit between 0-9
* @c: function parameter to be supplied
* Return: Return 1 if digit and 0 otherwise
*/
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
