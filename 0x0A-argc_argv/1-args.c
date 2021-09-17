#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - function prints the number of arguments passed into it.
* @argc: is a count of the arguments passed to the program
* @argv: an array of strings containing the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;
	if (argc == 1)
		printf("\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		}
		printf("%d\n", i);
	}
	return (0);
}
