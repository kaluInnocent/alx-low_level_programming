#include "main.h"
/**
* factorial - function prints the factorial of a number
* @n: number whose factorail is to be printed
* Return: function returns a factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
