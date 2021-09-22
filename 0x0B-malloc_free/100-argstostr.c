#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* slen - function computes the length of a character array
* @s: string whose length is to be found
* Return: returns the length of a string
*/
int slen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
* argstostr - function concatenates all the arguements of a program
* @ac: number of arguments of a program
* @av: array of arguments of the program
* Return: a pointer to a new string or NULL if it fails
* each argument is followed by a \n in the new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += slen(av[i]);

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < slen(av[i]); j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	return (str);
	return (str);
}
