#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* str_concat - function that concatenates two strings
* The returned pointer points to a newly allocated space
* in memory which contains the contents of s1,
* followed by the contents of s2 and null terminated
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* if NULL is passed, treated it as an empty string
* Return: The function should return NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; j < len2; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
