#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "search_algos.h"

/**
* linear_search - Function performs a linear search
* @array:  pointer to the first element of the array to search in
* @size: The number of elements in array
* @value: value is the value to search for
* Return: return the first index where value is located
* If value is not present in array or if array is NULL, function must return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
