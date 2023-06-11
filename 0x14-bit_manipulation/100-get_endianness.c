#include "main.h"
/**
 * get_endianness - determines if littel endian or big endian
 * Return: 1 for little endian and 0 for big endian
 *
 */
int get_endianness(void)
{
	unsigned int val = 1;
	unsigned char *byte = (unsigned char *)&val;

	if (*byte == 0x01)
		return (1);
	else
		return (0);
}
