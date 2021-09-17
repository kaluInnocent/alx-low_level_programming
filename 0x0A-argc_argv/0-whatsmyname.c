#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - function takes two arguements and prints the name of the program
* - command line parameters
* @argc: The count of arguments supplied to the program
* @argv: A one dimensional array of strings
* each element of the array reprsents the command line arguments
* Return: fucntion returns 0 on completion
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", argv[0]);
	return (0);
}
