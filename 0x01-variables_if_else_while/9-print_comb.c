#include<stdio.h>
#include<ctype.h>
/**
* main - Program prints digits 0-9 with commas and spaces
*
* Return: return 0
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
