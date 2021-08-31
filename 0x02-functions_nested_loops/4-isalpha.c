#include "main.h"
/**
* _isalpha - function checks for alphabetic character
* @letter: parameter to be tested
*
* Return: return1 if alphabet, 0 otherwise
*/
int _isalpha(int letter)
{

	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
