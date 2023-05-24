#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints abount dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		if (d->name == NULL)
			printf("Name: nill\n");
		else
			printf("Name: %s\n", d->name);
		if (d->owner == NULL)
			printf("Owner: nill\n");
		else
			printf("owner: %s\n", d->owner);
		printf("age: %f\n", d->age);
	}
}
