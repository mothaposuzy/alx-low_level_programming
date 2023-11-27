#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to struct dog to initalize
 * @name: name to initialize
 * @age: age to initialise
 * @owner: owner to initialise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
