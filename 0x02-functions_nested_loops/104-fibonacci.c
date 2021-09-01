#include<stdio.h>
#include<stdlib.h>
/**
* main - function prints the first 98 Fibonacci numbers
* starting with 1 and 2
*
* Return: return (0)
*/
int main(void)
{
	unsigned long previous = 1, current = 2, new;
	int i = 3;

	printf("%lu, %lu, ", previous, current);
	while (i <= 98)
	{
		new = previous + current;
		if (i != 98)
		{
			printf("%lu, ", new);
		}
		else
		{
			printf("%lu", new);
		}
		previous = current;
		current = new;
		i++;
	}
	printf("\n");
	return (0);
}
