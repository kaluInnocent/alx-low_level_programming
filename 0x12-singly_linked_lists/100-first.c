#include "lists.h"
#include <stdio.h>
/**
* print_before_main - function is executed before main
* Return: nothing
*/
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
