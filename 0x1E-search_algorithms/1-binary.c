#include "search_algos.h"

/**
* binary_search - function performs a binary search
* @array: The array to be searched
* @size: size of the array
* @value: value to be searched in the array
* Return: index of value if found, -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array)
	{
		for (low = 0, high = size - 1; high >= low;)
		{
			printf("Searching in array: ");
			i = low;
			while (i < high)
			{
				printf("%d, ", array[i]);
				i++;
			}
			printf("%d\n", array[i]);
			i = low + (high - low) / 2;
			if (array[i] == value)
				return (i);
			if (array[i] > value)
				high = i - 1;
			else
				low = i + 1;
		}
	}
	return (-1);
}
