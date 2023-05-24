#include <stdlib.h>
#include "dog.h"
/**
 * str_len -  lenght of a string
 * @t:  string
 * Return: length of string
 */

int str_len(char *t)
{
	int i;

	for (i = 0; t[i] != '\0'; i++)
		return (i);
}

/**
 * str_cpy - a function
 * @dest: copy to
 * @src: copy from
 * Return: dest value
 */

{
	int i;

	for (i = 0; src[i] !='\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}




/**
 * new_dog - intialises struct dog
 * @name: type char
 * @owner: type char
 * @age: type float
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *dog;
}

