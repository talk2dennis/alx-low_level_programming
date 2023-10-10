#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - allocate memory for dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: return pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->owner = owner;
	mydog->name = name;
	mydog->age = age;
	return (mydog);
}
