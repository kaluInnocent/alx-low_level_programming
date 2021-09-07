#include "main.h"
/**
* _atoi - function converts a string to an integer
* @s: string to be converted to integer
* Return: returns the converted integer
*/
int _atoi(char *s)
{
	int i, n;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
		n = 10 * n + (s[i] - '0');
	}
	return (n);
}
