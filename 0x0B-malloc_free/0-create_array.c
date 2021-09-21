#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* create_array - function creates an array of chars,
* and initializes it with a specific char
* @size: size of the array
* @c: character to be initializede in the array
* Return: returns NULL if size = 0
* returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
