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

	dog2 = malloc(sizeof(dog2->name + 1));
	if (name == NULL)
	{
		return (NULL);
	}
	dog2 = malloc(sizeof(dog2->owner));
	if (owner == NULL)
	{
		return (NULL);
	}
	dog2->age = age;

	return (dog2);
}
