#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - function converts a binary number to an unsigned int
* @b: a pointer to a string of 0 and 1 chars
* Return: The converted number or 0 if:
*	there is one or more chars in the string b that is not 0 or 1
*	b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int len = 0, i, base = 1;

	if (b == NULL)
		return (0);

	while (*b)
	{
		len++;
		b++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (*(b + i) != '0' || *(b + i) != '1')
			return (0);
		if (b[i] == '1')
			binary += base;
		base *= 2;
	}
	return (binary);
}
