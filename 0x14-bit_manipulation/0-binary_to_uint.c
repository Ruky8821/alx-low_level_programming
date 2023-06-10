#include "main.h"
/**
 * binary_to_uint - converts a binary stirng to decimal
 * @b: character string
 * Return: rst on success or 0 idf fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rst = 0, pwr = 0, tm = 0, j = 0, i = 0;
	size_t length = 0;

	if (!b)
		return (0);
	while (b[length] != '\0')
		length ++;
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{	pwr = length - i - 1;
			tm = 1;

			for (j = 0; j < pwr; j++)
				tm *= 2;
			rst += (b[i] - '0') * tm;
		}
		else
			return (0);
	}
	return (rst);
}
