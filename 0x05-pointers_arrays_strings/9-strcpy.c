#include "main.h"
/**
* _strcpy - function copies the string pointed to by src,
* including the termination null byte (\0), to the buffer pointed to by dest
* @dest: pointer to string
* @src: string to be copied to pointer
* Return: return the pointer to dest
*/
cahr *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
