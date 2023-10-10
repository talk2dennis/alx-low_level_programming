#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to check the length
 * Return: returns he lenght in int
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - a function that copies string
 * @src: string to copy from
 * @dest: location to copy to
 * Return: void
 */

void _strcpy(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}


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
	mydog->name = malloc(_strlen(name) + 1);
	if (mydog->name == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	_strcpy(mydog->name, name);
	mydog->owner = malloc(_strlen(owner));
	if (mydog->owner == NULL)
	{
		free(mydog->owner);
		free(mydog);
		return (NULL);
	}
	_strcpy(mydog->owner, owner);
	mydog->age = age;
	return (mydog);
}
