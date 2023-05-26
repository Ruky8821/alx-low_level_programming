#include "variadic_functions.h"
/**
 * print_all - prints all format
 * @format: what type
 * @...: variable argument
 *
 */
void print_all(const char * const format, ...)
{
	int x;
	char *p;
	char *separator = ",";
	va_list cont;

	va_start(cont, format);
	if (format != NULL)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'f':
					printf("%f%s ", va_arg(cont, double), separator);
				case 'd':
					printf("%d%s ", va_arg(cont, int), separator);
				case 'c':
					printf("%c%s ", va_arg(cont, int), separator);

				case 's':
					if (p == NULL)
						printf("nil");
					else
						printf("%s%s ", va_arg(cont,char *), separator);
					break;
				default:
				x++;
				continue;
			}
			x++;
		}
	}
	va_end(cont);
	printf("\n");
}






