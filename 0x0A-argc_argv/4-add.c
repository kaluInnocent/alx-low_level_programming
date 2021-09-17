#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - adds positive numbers
* if no number is passed to the program, print-0, followed by a new line
* if one of the number contains symbols that are not digits, print Error,
* followed by a new line, and return 1
* @argc: is a count of the arguments passed to the program
* @argv: an array of strings containing the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
