#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string to check the length
 * Return: returns he lenght in int
 */

unsigned int _strlen(char *s)
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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
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

	if (name == NULL || owner == NULL)
		return (NULL);
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (mydog->name == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	_strcpy(name, mydog->name);
	mydog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (mydog->owner == NULL)
	{
		free(mydog->owner);
		free(mydog);
		return (NULL);
	}
	_strcpy(owner, mydog->owner);
	mydog->age = age;
	return (mydog);
}
