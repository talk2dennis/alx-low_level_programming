#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct dog d
 * @name: string name
 * @age: float age
 * @owner: string owner
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			exit(0);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
