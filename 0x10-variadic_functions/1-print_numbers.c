#include "variadic_functions.h"
/**
 * print_numbers - print a list of function
 * @separator: seprator ,
 * @n: number of integers
 * @...: variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list cont;

	if  (separator == NULL)
		printf("\n");
		return;
	va_start(cont, n);
	while (i--)
	{
		if (separator && n)
			printf("%d%s", va_arg(cont, int), separator);
		else if (!separator)
			printf("%d", va_arg(cont, int));
		else
			printf("%s", separator);

	}
	va_end(cont);
	printf("\n");
}
