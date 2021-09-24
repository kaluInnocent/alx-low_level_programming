#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* string_nconcat - fucntion concatenates two strings
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* @n: number of characters of s2 to be concatenated with s1
* Return: returns a pointer to a newly allocated space in memory
* which contains s1 followed by the first n bytes of s2 and null terminated
* if the function fails, it should return NULL
* if n is greater or equal to lenght of s2 we concatenate entire s2
* if NULL is passed, treat it as empty string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
