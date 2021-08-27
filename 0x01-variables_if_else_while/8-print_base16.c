#include<stdio.h>
#include<ctype.h>
/**
* main - Program prints digits 0-9
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
			i = 'a';
			for (; i <= 'f'; i++)
			{
				putchar(i);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
