#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* slen _ function determines the length of a string
* @s: string whose length is to be determined
* Return: returns the length of the string
*/
int slen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
* scopy - function copies string s1 to s
* @s: string to be copied into
* @s1: string to be copied
* Return: fucntion returns the string s
*/
char *scopy(char *s, char *s1)
{
	int i;

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	s[i] = '\0';
	return (s);
}

/**
* new_dog - fucntion creates a new dog struct
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: return the new dog struct or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (slen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (slen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = scopy(doggy->name, name);
	doggy->owner = scopy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
