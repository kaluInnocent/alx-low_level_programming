#include<stdlib.h>
#include "main.h"
/**
* array_range - function creates an array of integers
* The array created should contain all the values from min
* (included) to max (included), ordered from min to max
* @min: start of array
* @max: end of array
* Return: the pointer to the newly created array
* If min > max, return NULL
* If malloc fails, return NULL
*/
int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}
