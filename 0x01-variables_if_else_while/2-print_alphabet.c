#include<stdio.h>
#include<stdlib.h>
/**
* main - Prints the lower case alphabet
*
* Return: Return 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
