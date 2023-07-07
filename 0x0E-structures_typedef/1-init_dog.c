#include "dog.h"
/**
 * init_dog - intialises struct dog
 * @d: pointer to dog
 * @name: type char
 * @owner: type char
 * @age: type float
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


