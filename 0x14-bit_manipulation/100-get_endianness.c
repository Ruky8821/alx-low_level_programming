#include "main.h"
/**
 * get_endianness - determines if littel endian or big endian
 * Return: 1 for little endian and 0 for big endian
 *
 */
int get_endianness(void)
{
	unsigned long int val = 1;


	return (*(char *)&val);
}


