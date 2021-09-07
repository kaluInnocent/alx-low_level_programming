#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
* print_array - function prints n elements of an array
* of integers, followed by a new line.
*
* @a: is an array
* @n: is the number of elements of the array to be printed
* Return: returns nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
