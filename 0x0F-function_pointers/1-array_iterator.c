#include "function_pointers.h"

/**
 * array_iterator -  moves throught the elements of an array one at a time.
 * @array: pointer array of type int
 * @size: size of the elements of the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
/* to iterate through the array*/
	for (; x < size; x++)
		action(array[x]);
}
