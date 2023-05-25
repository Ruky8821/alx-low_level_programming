include "variadic_functions.h"
/**
 * print_strings - prints strings with separator
 * @separator: separating characters
 * @n: number of strings
 * @...: variable sting arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list cont;

	va_start(cont, n);
	for (; i < n; i++)
	{
		string = va_arg(cont, char *);

		if (string == NULL)
			printf("nill");
		else
			printf("%s", string);
		if ((i < n) && separator != NULL)
 			printf("%s", separator);
      
	}
	va_end(cont);
	printf("\n");
}
