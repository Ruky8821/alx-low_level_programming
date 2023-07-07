#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry point for the program
 * @argc: number of argument
 * @argv: index of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*operator = get_op_func(argv[2]);*/
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *operator == '/') || (num2 == 0 && *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}


