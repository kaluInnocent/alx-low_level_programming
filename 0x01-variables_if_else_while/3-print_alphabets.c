#include<stdio.h>
#include<stdlib.h>
/**
* main - This program prints uppercase letters and lowercase letters
*
*Return: Return 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
