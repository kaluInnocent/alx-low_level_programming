#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main: entry point of C programs
*
*Return: return 0
*/
int main(void)
{
	int n;
	int last_didgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		if (last_digit < 6) && (last_digit != 0)
		{
			printf("Last digit %d is %d and is lass than 6 and not 0\n", n, last_digit);
		}
	}
	return (0);
}
