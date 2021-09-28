#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - function prints a struct dog
* @d: pointer to the struct dog
* if an elememt of d is NULL, print (nil) instead of this element
* is name is NULL, print Name: (nil)
* if d is NULL print nothing
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
