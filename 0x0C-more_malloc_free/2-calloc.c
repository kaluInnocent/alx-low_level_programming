#include<stdlib.h>
#include "main.h"
/**
* _calloc - function allocates memory for an array using malloc
* The _calloc function allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated memory.
* @nmemb : number of numbers
* @size: size of array
* Return: If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int len, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = (size * nmemb);
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = 0;
	return (arr);
}
