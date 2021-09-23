#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* malloc_checked - function allocates memeory using malloc
* @b: size of memory to be allocated
* Return: returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause
* normal process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
