#include "main.h"
/**
 * _atoi - prints characters with signs
 * @s: pointer
 * Return: 1 on success
 */
int _atoi(char *s);
{
	int i = 0;
	int num = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int dgt = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	while (num < i && j == 0)
	{
		if (s[num] == 45)
		{
			++k;
		}
		if (s[num] >= 48 && s[num] <= 57)
		{
			dgt = s[num] - 48;
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
