#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valst;
	unsigned int x = 0, i, c = 0;
	char *string;
	const char t_arg[] = "cifs";

	va_start(valst, format);
	while (format && format[x])
	{
		i = 0;
		while (t_arg[i])
		{
			if (format[x] == t_arg[i] && c)
			{
				printf(", ");
				break;
			} i++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(valst, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valst, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valst, double)), c = 1;
			break;
		case 's':
			string = va_arg(valst, char *), c = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} x++;
	}
	printf("\n"), va_end(valst);
}
