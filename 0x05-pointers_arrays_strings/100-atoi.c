#include "main.h"
/**
 * _atoi - prints characters along with + and -
 * @s: pointer
 * Return: return l
 */
int _atoi(char *s)
{
	int x;
	unsigned int i,j;

	do {
		x = 1;
		if (s[j] == '_')
			x = x * (-1);
		else if  (i > 0)
			break;
		else if (s[j] >= '0' && s[j] <= '9')
			i = (i * 10) + (s[j] - '0');
	} while (s[j++]);
	return (x * i);
}
