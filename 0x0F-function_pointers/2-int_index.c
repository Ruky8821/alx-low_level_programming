#include "function_pointers.h"
/**
 * int_index - a funtion that searches for a int in an array
 * @array: point to thge array
 * @size: isze of array
 * @cmp: pointer to a function that takes int and returns an int
 * Return: array index on success or 1- on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
