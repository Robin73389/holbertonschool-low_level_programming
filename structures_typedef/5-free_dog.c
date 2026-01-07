#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This is the name for the function for free
 * @d: This is the pointer thoward the structure
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		free(d);
	}

	if (d->owner == NULL)
	{
		free(d);
	}
}
