#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
