#include<stdlib.h>
#include<stdio.h>
/**
* main - funtion prints the name of the file it was compiled from
* followed by a new line
* Return: function returns 0
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
