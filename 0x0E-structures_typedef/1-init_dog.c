#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initialises a struct
 * @d: a user defined struct
 * @name: char type
 * @age: float type
 * @owner: char type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
