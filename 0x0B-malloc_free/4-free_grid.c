#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
* free_grid - function frees a 2D grid
* @grid: 2d grid to be freed
* @height: height of grid
* Return: returns nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
