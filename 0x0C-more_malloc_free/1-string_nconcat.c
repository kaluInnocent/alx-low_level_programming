#include "main.h"
#include<stdlib.h>
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
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i++] = s2[j];

	str[i] = '\0';
	return (str);
}
