#include<stdio.h>
#include<stdlib.h>
/**
* main - function prints numbers from 0-100
* Return: return (0)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);

	}
	putchar('\n');
	return (0);
}
