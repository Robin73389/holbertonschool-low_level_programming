#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - This is my function for create the seconde dogs
 * @name: This this the name the dogs
 * @age: This is Age the dogs
 * @owner: This is the name the owner
 * Return: (dog2)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}

	dog2->name = malloc(strlen(name) + 1);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(strlen(owner));
	if (dog2->owner == NULL)
	{
		free(dog2);
		return (NULL);
	}
	strcpy(dog2->name, name);
	strcpy(dog2->owner, owner);
	dog2->age = age;

	return (dog2);
}
