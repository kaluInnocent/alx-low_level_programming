#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - function fress dogs
* @d: pointer to the struct dog
* Return: returns nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
