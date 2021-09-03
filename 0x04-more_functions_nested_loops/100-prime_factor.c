#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
* main - finds the highest prime factor of a number
* Return: return (0)
*/
int main(void)
{
	long int i, number = 612852475143;
	int max;

	while (number % 2 == 0)
	{
		max = 2;
		number = number / 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			max = i;
			number = number / i;
		}
	}
	if (number > 2)
	{
		max = number;
	}
	printf("%d", max);
}
