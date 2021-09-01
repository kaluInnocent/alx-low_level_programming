#include<stdio.h>
#include<stdlib.h>
/**
* main - function prints the first 50 Fibonacci numbers
* starting with 1 and 2
*
* Return: return (0)
*/
int main(void)
{
	int previous = 1;
	int current = 2;
	int i = 3;
	int new;
	
	printf("%d, %d, ", previous, current);
	while (i <= 50)
	{
		new = previous + current;
		if (new != 50)
		{
			printf("%d, ", new);
		}
		else
		{
			printf("%d", new);
		}
		previous = current;
		current = new;
		i++;
	}
	printf("\n");
	return (0);
}
