#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - gets suitavb;e operand
 * @s: opinter
 * Return: returns suitable operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	do {
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	} while (i < 5);
	return (NULL);
}

