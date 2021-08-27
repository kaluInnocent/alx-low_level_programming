#include<stdio.h>
#include<stdlib.h>
/**
* main - Prints the lower case alphabet in reverse
*
* Return: Return 0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
