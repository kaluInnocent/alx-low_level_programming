#include<math.h>
#include "search_algos.h"

/**
* jump_search - function performs a jump search
* @array: List to be searched
* @size: size of array
* @value: value to be searched in array
* Return: index of value if fpunf, -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t block = sqrt(size);

	if (array)
	{
		while (array[block] <= value && block < size)
		{
			i = block;
			block += sqrt(size);
			if (block > size - 1)
				return (-1);
		}
		size_t j;
		for (j = i; j < block; j++)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}
	return (-1);
}
