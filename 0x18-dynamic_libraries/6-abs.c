#include "main.h"
/**
* _abs - function computes the absolute value of a number
* @n: parameter to be tested
*
* Return: return absolute(number)
*/
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
