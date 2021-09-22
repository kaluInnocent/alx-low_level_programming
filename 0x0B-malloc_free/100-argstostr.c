#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* argstostr - function concatenates all the arguements of a program
* @ac: number of arguments of a program
* @av: array of arguments of the program
* Return: a pointer to a new string or NULL if it fails
* each argument is followed by a \n in the new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, len = ac, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
