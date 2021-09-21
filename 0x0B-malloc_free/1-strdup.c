#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
* _strdup - function returns apointer to a newly allocated space
* in memory which contains a copy of the string given as a parameter
* @str: the string to be duplicated
* Return: NULL if str = NULL
* returns a pointer to the duplicated string if successful
* returns NULL if insufficient memory available
*/
char *_strdup(char *str)
{
	char *str_dup;
	int i, len = 0, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	str_dup = malloc(sizeof(*str) * len + 1);
	if (str_dup == NULL)
		return (NULL);
	while (j < len)
	{
		*(str_dup + j) = *(str + j);
		j++;
	}
	*(str_dup + j) = '\0';
	return (str_dup);
}
