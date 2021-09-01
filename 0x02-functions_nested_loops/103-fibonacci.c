#include<stdio.h>
#include<stdlib.h>
/**
* main - function prints the sum of the even Fibonacci numbers
* starting with 1 and 2
*
* Return: return (0)
*/
int main(void)
{
	unsigned long previous = 0, current = 1, new = 0, sum = 0;
	while (new <= 4000000)
	{
		new = previous + current;
		previous = current;
		current = new;
		if (previous % 2 == 0)
		{
			sum += previous;
		}
	
	}
	printf("%ld\n", sum);
	return (0);
}
