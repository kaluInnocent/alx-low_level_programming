#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* is_digit - function tests for the presence 0f a digit
* @ch: string to be checked for digit
* Return: returns 1 if digit and 0 otherwise
*/
int is_digit(char *ch)
{
	int i, digit = 0;

	for (i = 0; ch[i]; i++)
	{
		if (ch[i] < '0' || ch[i] > '9')
		{
			return (-1);
		}
		else
			digit = digit * 10 + (ch[i] - '0');
	}
	return (digit);
}
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
	int i, digit, sum = 0;

	if (argc > 0)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		for (i = 0; i < argc; i++)
		{
			digit = is_digit(argv[i]);
			if (digit == -1)
			{
				printf("Error\n");
				return (1);
			}
			sum += digit;
		}
		printf("%d\n", sum);
	}
	return (0);
}
