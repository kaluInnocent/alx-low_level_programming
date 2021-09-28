#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* init_dog - Fucntion initializes a variable of type struc dog
* @d: pointer to the dog struct t be initialized
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return : returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
