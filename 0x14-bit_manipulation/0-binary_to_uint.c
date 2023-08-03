#include "main.h"
/**
 * binary_to_uint - converts a base 2 string to decimal
 * @b: character string
 * Return: result on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, power = 0, idx = 0, j = 0, i = 0;
	size_t len = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			power = len - i - 1;
			idx = 1;

			for (j = 0; j < power; j++)
				idx *= 2;
			result += (b[i] - '0') * idx;
		}
		else
			return (0);
	}
	return (result);
}
