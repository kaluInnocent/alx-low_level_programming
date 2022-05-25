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
	size_t i, j;
	size_t block = sqrt(size);

	if (array)
	{
		for (i = j = 0; j < size && array[j] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			i = j;
			j += block;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", i, j);

		j = j < size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (array[i] == value ? (int)i : -1);
	}
	return (-1);
}
