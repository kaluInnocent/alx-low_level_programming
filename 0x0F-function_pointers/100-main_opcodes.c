#include <stdio.h>
#include <stdlib.h>
/**
* main - progran prints the opcodes of its own function
* @argc: no. of arguments used in the program
* @argv: array to arguments for the program
* Return: fucntions returns zero on success
*/
int main(int argc, char *argv[])
{
	int i, arg;
	int (*func)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg; i++)
	{
		opcode = *(unsigned char *)func;
		printf("%.2x", opcode);

		if (i == arg - 1)
			continue;
		printf(" ");
		func++;
	}
	printf("\n");
	return (0);
}
