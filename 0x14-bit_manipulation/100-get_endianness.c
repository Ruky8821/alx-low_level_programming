#include "main.h"

/**
 * get_endianness - little or big endian
 * Return: 0 if  big and 1 if little
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *c = (char *) &val;

	return (*c);
}

