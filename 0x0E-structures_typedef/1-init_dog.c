#include <stdio.h>
#include "dog.h"
<<<<<<< HEAD
/**
 * init_dog - intialises struct dog
 * @d: pointer to dog
 * @name: type char
 * @owner: type char
 * @age: type float
=======
#include "main.h"

/**
 * init_dog - initialises a struct
 * @d: a user defined struct
 * @name: char type
 * @age: float type
 * @owner: char type
>>>>>>> e520763cce94c9c19a5e259fcadc003723957d97
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d)
<<<<<<< HEAD
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

=======
	d->name = name;
	d->age = age;
	d->owner = owner;
}
>>>>>>> e520763cce94c9c19a5e259fcadc003723957d97
