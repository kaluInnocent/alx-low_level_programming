#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program multiplies two numbers
* if the program does not receive two arguments, it prints error and returns 1
* @argc: is a count of the arguments passed to the program
* @argv: an array of strings containing the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 0)
	{
		if (argc == 3)
		{
			for (i = 1; i < argc; i++)
				mult *= atoi(*(argv + i));
			printf("%d\n", mult);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
