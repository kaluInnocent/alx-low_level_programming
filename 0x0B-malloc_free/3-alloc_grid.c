#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* alloc_grid - function returns a pointer to a 2D array of integers
* each element of the grid is initialized to 0
* @width: the column of 2d array
* @height: row of the array
* Return: returns NULL on failure
* if width or height is 0 or negative, return NULL
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (h_index = 0; h_index < height; h_index++)
	{
		array[h_index] = malloc(sizeof(int) * width);

		if (array[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(array[h_index]);
			free(array);
			return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
		for (w_index = 0; w_index < width; w_index++)
			array[h_index][w_index] = 0;
	return (array);
}
