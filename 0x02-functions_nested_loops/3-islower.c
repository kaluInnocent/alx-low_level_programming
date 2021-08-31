#include "main.h"
/**
* _islower - function checks for lowercase alphabets
*
* Return: return1 if lowercase, 0 otherwise
*/
int _islower(int letter)
{

	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
