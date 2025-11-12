#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - the name for the function
 * @d: the pointer
 * @name: this is variable
 * @age: this is variable
 * @owner: this is variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
