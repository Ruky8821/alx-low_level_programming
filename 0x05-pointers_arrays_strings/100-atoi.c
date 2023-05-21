#include "main.h"
/**
 * _atoi - prints characters along with + and -
 * @s: pointer
 * Return: return l
 */
int _atoi(char *s)
{
	int i, num, j, k, l, dgt;

	i = 0;
	num = 0;
	j = 0;
	k = 0;
	l = 0;
	dgt = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	while (num < i && j == 0)
	{
		if (s[num] == '-')
		{
			++k;
		}
		if (s[num] >= '0' && s[num] <= '9')
		{
			dgt = s[num] - '0';
			if (k % 2)
			{
				dgt =  -dgt;
			}
			l = l * 10 + dgt;
			j = 1;
			if (s[num + 1] < 48 || s[num + 1] > 57)
				break;
			j = 0;
		}
		num++;
	}
	if (j == 0)
	{
		return (0);
	}
	return (l);
}
