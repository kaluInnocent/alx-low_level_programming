#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
* main - finds the highest prime factor of a number
* Return: return (0)
*/
int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
