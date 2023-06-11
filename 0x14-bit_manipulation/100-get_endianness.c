#include "main.h"
/**
 * get_endianness - determines if littel endian or big endian
 * Return: 1 for little endian and 0 for big endian
 *
 */
int get_endianness(void)
{
	unsigned int val = 0x12345;
	unsigned char *byte = (unsigned char *)&val;

	return (*byte);
}
