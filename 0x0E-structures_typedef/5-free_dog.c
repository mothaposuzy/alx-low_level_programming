#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory to be allocated to to struct dog
 * @d: struct dog to free
 *
 * Returns: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
