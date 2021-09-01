#include<stdio.h>
#include<stdlib.h>
/**
* main - function prints the sum of all
* the multiples of 3 or 5 below 1024
*
* Return: return (0)
*/
int main(void)
{
	int sum = 0;
	int counter;

	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
		{
			sum += counter;
		}
	}
	printf("%d\n", sum);
	return (0);
}
