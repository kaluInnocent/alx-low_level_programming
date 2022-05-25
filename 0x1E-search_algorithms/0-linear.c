#include <stdio.h>
#include <stdlib.h>
#include <stddef>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			else if (i + 1 == size)
			{
				return (-1);
			}
		}
	}
	return (-1);
}
