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

	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;

	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	if (n >= len2)
		for (j = 0; j < len2; j++)
			str[i++] = s2[j];
	else
		for (j = 0; j < n; j++)
			str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
