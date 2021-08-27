#include<stdio.h>
#include<stdlib.h>
/**
* main - This program prints alphabet in lowcase
*
* Return: Return 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter !='e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return 0;
}
